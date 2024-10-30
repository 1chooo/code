/*
 * Author: @1chooo
 * Title: 11498 - Division of Nlogonia
 * Required: frequency limit: 1.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493
 * Status: AC
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int cas, n, m, x, y;

    while (scanf("%d", &cas) && cas) {
        scanf("%d %d", &n, &m);
        for (int i = 0; i < cas; i++) {
            scanf("%d %d", &x, &y);
            if (x == n || y == m)
                printf("divisa\n");
            else if (x > n && y < m)
                printf("SE\n");
            else if (x > n && y > m)
                printf("NE\n");
            else if (x < n && y < m)
                printf("SO\n");
            else if (x < n && y > m)
                printf("NO\n");
        }
    }
    return 0;
}
