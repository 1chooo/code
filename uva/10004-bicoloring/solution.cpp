/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 10004 - Bicoloring
 * Required: frequency limit: 1.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945
 * Status: AC
 */

#include <stdio.h>
#include <iostream>

#define MAX_NODE 200

int dfs(
    char map[MAX_NODE][MAX_NODE],
    char color[MAX_NODE],
    int n,
    int start);

int main() {
    int n;
    while (scanf("%d", &n), n) {
        int m;
        int x, y;
        char map[MAX_NODE][MAX_NODE] = {};
        char color[MAX_NODE] = {};
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            map[x][y] = map[y][x] = 1;
        }

        for (int i = 0; i < n; i++)
            if (!color[i]) {
                color[i] = 1;
                if (!dfs(map, color, n, i)) {
                    printf("NOT ");
                    break;
                }
            }

        printf("BICOLORABLE.\n");
    }
    return 0;
}

int dfs(
    char map[MAX_NODE][MAX_NODE],
    char color[MAX_NODE],
    int n,
    int start) {
    for (int i = 0; i < n; i++)
        if (map[start][i])
            if (color[start] == color[i])
                return 0;
            else if (color[i] == 0) {
                color[i] = -color[start];
                if (!dfs(map, color, n, i))
                    return 0;
            }

    return 1;
}
