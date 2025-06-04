/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    long long int i;
    long long int j;

    while (cin >> i >> j) {
        bool change = false;

        if (i > j) {
            long long int temp = i;
            i = j;
            j = temp;
            change = true;
        }

        int maxOperation = 0;

        for (int a = i; a <= j; a++) {
            long long int n = a;
            int operation = 1;

            while (n != 1) {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n /= 2;
                operation++;
            }

            if (operation > maxOperation)
                maxOperation = operation;
        }

        if (change == true)
            printf("%lld %lld %d\n", j, i, maxOperation);
        else
            printf("%lld %lld %d\n", i, j, maxOperation);
    }

    return 0;
}
