/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=c316
 Status: AC
*/

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int N = 0;

    cin >> N;
    int x[N];
    int y[N];

    for (int i = 0; i < N; i++) {
        int tempX = 0, tempY = 0;

        cin >> tempX >> tempY;
        x[i] = tempX;
        y[i] = tempY;
    }

    long long int maxDistance = 0, distance = 0;
    int minimumPoint = 0;
    int maxPoint = 0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            distance = abs(((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j])));

            if (distance > maxDistance) {
                maxDistance = distance;
                minimumPoint = i;
                maxPoint = j;
            }

            // cout << maxDistance << ", " << minimumPoint << ", " << maxPoint << endl;
        }
    }

    if (minimumPoint > maxPoint) {
        swap(minimumPoint, maxPoint);
    }

    printf("%d %d\n", minimumPoint, maxPoint);

    return 0;
}
