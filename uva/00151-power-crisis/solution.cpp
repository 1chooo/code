/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=87
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>

int find(int n, int m);

int main(void) {
    int n;
    int m;

    while (scanf("%d", &n) == 1 && n != 0) {
        for (m = 1;; m++)
            if (find(n, m)) {
                printf("%d\n", m);
                break;
            }
    }

    return 0;
}

int find(int n, int m) {
    int in[100];
    int last = 0;
    int c;
    int k;

    for (int i = 0; i < 100; i++)
        in[i] = 0;

    for (int i = 1, k = m, c = 0; c < n;) {
        if (!in[i] && i <= n) {
            if (k == m) {
                last = i;
                c++;
                k = in[i] = 1;
            } else {
                i++;
                k++;
            }
        } else {
            i++;
            if (i > n)
                i = 1;
        }
    }

    if (last == 13)
        return 1;

    return 0;
}
