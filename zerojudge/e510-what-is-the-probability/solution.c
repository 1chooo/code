/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e510
 * Status: AC
 */

#include <math.h>
#include <stdio.h>

int main(void) {
    int set;

    scanf("%d", &set);

    while (set--) {
        int num;
        double prob;
        int serial;

        scanf("%d %lf %d", &num, &prob, &serial);

        if (prob == 0)
            printf("0.0000\n");
        else {
            double q = 1 - prob;
            double result = pow(q, serial - 1) * prob / (1 - pow(q, num));
            printf("%.4lf\n", result);
        }
    }

    return 0;
}
