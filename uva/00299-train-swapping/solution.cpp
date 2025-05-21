/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=235
 * Status: AC
 */

#include <stdio.h>

int main(void) {
    int n;

    scanf("%d", &n);

    while (n--) {
        int tr[100];

        for (int i = 0; i < 100; i++)
            tr[i] = 0;

        int count = 0;
        int l;

        scanf("%d", &l);

        for (int i = 0; i < l; i++)
            scanf("%d", &tr[i]);

        for (int i = 0; i < l - 1; i++) {
            for (int k = 0; k < l - 1; k++) {
                if (tr[k] > tr[k + 1]) {
                    int t = tr[k];
                    tr[k] = tr[k + 1];
                    tr[k + 1] = t;
                    count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    return 0;
}
