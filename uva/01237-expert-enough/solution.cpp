/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3678
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while (n--) {
        int k;
        scanf("%d", &k);

        int data1[10000];
        int data2[10000];
        char name[10000][25];
        for (int i = 0; i < k; i++)
            scanf("%24s %d %d", name[i], &data1[i], &data2[i]);

        int m;
        scanf("%d", &m);
        while (m--) {
            int p;
            scanf("%d", &p);

            int temp = 0;
            int key;

            for (int i = 0; i < k; i++) {
                if (data1[i] <= p && p <= data2[i])
                    temp++, key = i;
                if (temp > 1)
                    break;
            }

            if (temp == 1)
                printf("%s\n", name[key]);
            else
                printf("UNDETERMINED\n");
        }

        if (n)
            printf("\n");
    }

    return 0;
}
