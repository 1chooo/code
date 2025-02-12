/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d712
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    long long start;
    long long end;

    while (cin >> start >> end) {
        bool swapped = false;

        if (start > end) {
            long long temp = start;
            start = end;
            end = temp;
            swapped = true;
        }

        long long maxStep = 0;
        long long step;

        for (long long num = start; num <= end; num++) {
            long long currentNumber = num;
            step = 1;

            while (currentNumber != 1) {
                if ((currentNumber & 1) == 0)
                    currentNumber >>= 1;
                else
                    currentNumber = 3 * currentNumber + 1;
                step++;
            }

            if (step > maxStep)
                maxStep = step;
        }

        if (swapped)
            printf("%lld %lld %lld\n", end, start, maxStep);
        else
            printf("%lld %lld %lld\n", start, end, maxStep);
    }

    return 0;
}
