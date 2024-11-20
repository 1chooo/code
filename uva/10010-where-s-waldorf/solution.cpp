/*
 * Author: @1chooo
 * Title: 10010 - Where's Waldorf?
 * Required: frequency limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
    int d[8][2] = {
        {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getchar();
        int a, b;
        cin >> a >> b;
        cin.ignore();
        char table[a][b];
        for (int j = 0; j < a; j++) {
            for (int k = 0; k < b; k++)
                cin >> table[j][k];
            getchar();
        }
        int m;
        cin >> m;
        cin.ignore();
        string s[m];
        int ans[m][3] = {0};
        for (int j = 0; j < m; j++)
            getline(cin, s[j]);
        for (int j = 0; j < a; j++)
            for (int k = 0; k < b; k++)
                for (int g = 0; g < m; g++)
                    if (ans[g][0] < (int)s[g].length() && tolower(s[g][0]) == tolower(table[j][k])) {
                        for (int h = 0; h < 8; h++) {
                            int step = 0;
                            while ((j + d[h][0] * step) >= 0 && (k + d[h][1] * step) >= 0 &&
                                   (j + d[h][0] * step) <= a && (k + d[h][1] * step) <= b) {
                                if (tolower(s[g][step]) == tolower(table[j + d[h][0] * step][k + d[h][1] * step])) {
                                    ans[g][0]++;
                                    step++;
                                } else {
                                    ans[g][0] = 0;
                                    break;
                                }
                                if (ans[g][0] == (int)s[g].length()) {
                                    ans[g][1] = j + 1;
                                    ans[g][2] = k + 1;
                                    break;
                                }
                            }
                            if (ans[g][0] == (int)s[g].length())
                                break;
                            else
                                ans[g][0] = 0;
                        }
                    }
        for (int j = 0; j < m; j++)
            cout << ans[j][1] << " " << ans[j][2] << endl;
        if (i < n - 1)
            cout << endl;
    }
    return 0;
}

/*
 * Author: https://github.com/morris821028/UVa/blob/master/volume100/10010%20-%20Where's%20Waldorf.cpp
 * Title: 10010 - Where's Waldorf?
 * Required: frequency limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <stdio.h>

#define toLower(c) ((c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : (c))
int t, n, m, i, j, k;

void find(char str[], char map[][60]) {
    static int D[][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    int i, j, k, x, y, idx;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < 8; k++) {
                x = i, y = j, idx = 0;
                while (map[x][y] == str[idx]) {
                    x += D[k][0], y += D[k][1];
                    idx++;
                    if (str[idx] == '\0') {
                        printf("%d %d\n", i + 1, j + 1);
                        return;
                    }
                    if (x < 0 || y < 0 || x >= n || y >= m)
                        break;
                }
            }
        }
    }
}

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        char map[60][60], str[60];
        for (i = 0; i < n; i++) {
            scanf("%s", &map[i]);
            for (j = 0; j < m; j++)
                map[i][j] = toLower(map[i][j]);
        }
        scanf("%d", &k);
        while (k--) {
            scanf("%s", str);
            for (i = 0; str[i]; i++)
                str[i] = toLower(str[i]);
            find(str, map);
        }
        if (t)
            puts("");
    }
    return 0;
}
