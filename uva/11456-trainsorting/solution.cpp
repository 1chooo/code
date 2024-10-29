/*
 * Author: @1chooo
 * Title: 11456 - Trainsorting
 * Required: frequency limit: 1.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2451
 * Status: AC
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, t, num[4010], lis[4010];
    int i, j, be, end, ans;

    while (scanf("%d", &n) != EOF) {
        while (n--) {
            ans = 0;
            scanf("%d", &t);
            if (t == 0) {
                printf("0\n");
                continue;
            }
            for (i = 0; i < t; i++) {
                scanf("%d", &num[t + i]);
                num[t - i - 1] = num[t + i];
                lis[t - i - 1] = 0;
                lis[t + i] = 0;
            }
            lis[0] = num[0];
            for (i = 1, ans = 0; i < (2 * t); i++) {
                if (num[i] > lis[ans]) {
                    lis[ans + 1] = num[i];
                    ans++;
                } else {
                    for (j = 0; j <= ans; j++) {
                        if (num[i] <= lis[j]) {
                            lis[j] = num[i];
                            break;
                        }
                    }
                }
            }
            printf("%d\n", ans + 1);
        }
    }
    return 0;
}
