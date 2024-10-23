#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double pointX[4], pointY[4];
    int index[2]; // the index of overlapping point
    double firstX, firstY, secondX, secondY, thirdX, thirdY;
    double fourthX, fourthY;
    double vector1_X, vector1_Y, vector2_X, vector2_Y;

    while (cin >> pointX[0] >> pointY[0]) {
        for (int i = 1; i < 4; i++) {
            cin >> pointX[i] >> pointY[i];
        }

        // find the overlappig point
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (pointX[i] == pointX[j] && pointY[i] == pointY[j]) {
                    index[0] = i;
                    index[1] = j;
                }
            }
        }

        secondX = pointX[index[0]];
        secondY = pointY[index[0]];

        int tmp = 1;
        for (int i = 0; i < 4; i++) {
            if (i != index[0] && i != index[1]) {
                if (tmp == 1) {
                    firstX = pointX[i];
                    firstY = pointY[i];
                } else {
                    thirdX = pointX[i];
                    thirdY = pointY[i];
                }
                tmp++;
            }
        }

        // calculate the vector of parallelogram
        vector1_X = firstX - secondX;
        vector1_Y = firstY - secondY;
        vector2_X = thirdX - secondX;
        ;
        vector2_Y = thirdY - secondY;

        fourthX = secondX + vector1_X + vector2_X;
        fourthY = secondY + vector1_Y + vector2_Y;

        printf("%.3f %.3f\n", fourthX, fourthY);
    }
    return 0;
}