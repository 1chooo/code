/*
 * Author: @1chooo
 * Title: 12918 - Lucky Thief
 * Required: frequency limit: 1.000 seconds
 * Link:
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long int a, b;
    long long int ans;

    scanf("%d", &n);

    while (n--) {
        scanf("%lld %lld", &a, &b);
        ans = (b + b - a - 1) * a / 2;
        printf("%lld\n", ans);
    }

    return 0;
}
