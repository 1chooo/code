/*
 * Author: @1chooo
 * Title: 10191 Longest Nap
 * Required: Time limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b);

int main() {
    int testCase = 0;
    int n;

    while (scanf("%d", &n) != EOF) {
        char str[12000];
        int time[12000][2];
        int m;
        int h;

        time[0][0] = 0;
        time[0][1] = 10 * 60;

        for (int i = 1; i <= n; ++i) {
            scanf("%d%*c%d", &h, &m);
            time[i][0] = h * 60 + m;
            scanf("%d%*c%d", &h, &m);
            time[i][1] = h * 60 + m;
            gets(str);
        }

        time[n + 1][0] = 18 * 60;
        time[n + 1][1] = 24 * 60;
        n = n + 2;
        qsort(time, n, sizeof(time[0]), cmp);

        int ans = 0;
        int maxTime;

        for (int i = 1; i <= n; ++i) {
            if (ans < time[i][0] - time[i - 1][1]) {
                ans = time[i][0] - time[i - 1][1];
                maxTime = time[i - 1][1];
            }
        }

        printf("Day #%d: the longest nap starts at %.2d:%.2d and will last for ", ++testCase, maxTime / 60, maxTime % 60);

        if (ans < 60)
            printf("%d minutes.\n", ans);
        else
            printf("%d hours and %d minutes.\n", ans / 60, ans % 60);
    }

    return 0;
}

int cmp(const void *a, const void *b) {
    int *p = (int *)a;
    int *q = (int *)b;

    return p[0] - q[0];
}
