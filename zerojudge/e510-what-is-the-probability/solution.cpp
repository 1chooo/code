/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e510
 * Status: AC
 */

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int set;

    cin >> set;

    while (set--) {
        int num;
        double prob;
        int serial;

        cin >> num >> prob >> serial;

        if (prob == 0)
            cout << "0.0000\n";
        else {
            double q = 1 - prob;
            double result = pow(q, serial - 1) * prob / (1 - pow(q, num));
            printf("%.4lf\n", result);
        }
    }

    return 0;
}
