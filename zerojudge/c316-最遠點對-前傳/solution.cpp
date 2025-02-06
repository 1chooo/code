/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=c316
 * Status: AC
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int num = 0;

    cin >> num;
    int x[num];
    int y[num];

    for (int i = 0; i < num; i++) {
        int tempX = 0;
        int tempY = 0;

        cin >> tempX >> tempY;
        x[i] = tempX;
        y[i] = tempY;
    }

    long long int maxDistance = 0;
    long long int distance = 0;
    int minimumPoint = 0;
    int maxPoint = 0;

    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            distance = abs(((x[i] - x[j]) * (x[i] - x[j])) +
                           ((y[i] - y[j]) * (y[i] - y[j])));

            if (distance > maxDistance) {
                maxDistance = distance;
                minimumPoint = i;
                maxPoint = j;
            }
        }
    }

    if (minimumPoint > maxPoint) {
        swap(minimumPoint, maxPoint);
    }

    printf("%d %d\n", minimumPoint, maxPoint);

    return 0;
}
