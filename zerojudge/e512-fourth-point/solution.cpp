/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e512
 * Status: AC
 */

#include <iostream>

using namespace std;

int main(void) {
    double x[4] = {0.0};
    double y[4] = {0.0};

    while (cin >> x[0] >> y[0]) {
        for (int i = 1; i < 4; i++) {
            cin >> x[i] >> y[i];
        }

        int duplicateIdx[2]; // Indices of the overlapping point

        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (x[i] == x[j] && y[i] == y[j]) {
                    duplicateIdx[0] = i;
                    duplicateIdx[1] = j;
                }
            }
        }

        double baseX = 0.0;
        double baseY = 0.0;
        double oppositeX = 0.0;
        double oppositeY = 0.0;

        double sharedX = x[duplicateIdx[0]];
        double sharedY = y[duplicateIdx[0]];

        int count = 1;
        for (int i = 0; i < 4; i++) {
            if (i != duplicateIdx[0] && i != duplicateIdx[1]) {
                if (count == 1) {
                    baseX = x[i];
                    baseY = y[i];
                } else {
                    oppositeX = x[i];
                    oppositeY = y[i];
                }
                count++;
            }
        }

        // Calculate the missing vertex of the parallelogram
        double vec1X = baseX - sharedX;
        double vec1Y = baseY - sharedY;
        double vec2X = oppositeX - sharedX;
        double vec2Y = oppositeY - sharedY;

        double missingX = sharedX + vec1X + vec2X;
        double missingY = sharedY + vec1Y + vec2Y;

        printf("%.3f %.3f\n", missingX, missingY);
    }

    return 0;
}
