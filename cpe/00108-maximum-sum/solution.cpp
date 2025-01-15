/*
 * Author: @1chooo
 * Title: 108 - Maximum Sum
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=44
 * Status: AC
 */

#include <climits>
#include <cstdio>

#define SIZE 101
#define max(a, b) ((a) > (b) ? (a) : (b))

int input[SIZE][SIZE] = {
    0,
};

int sum[SIZE][SIZE] = {
    0,
};

void print_arr(const int arr[SIZE][SIZE], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%6d", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int solve(int n) {
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            sum[i][j] = (i > 0 ? sum[i - 1][j] : 0) +
                        (j > 0 ? sum[i][j - 1] : 0) +
                        input[i][j] -
                        (i > 0 && j > 0 ? sum[i - 1][j - 1] : 0);

    int maximum = INT_MIN;
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            for (int i = 0; i <= x; i++) {
                for (int j = 0; j <= y; j++) {
                    int s = sum[x][y] -
                            sum[i][y] -
                            sum[x][j] +
                            sum[i][j];
                    maximum = max(maximum, s);
                }
            }
        }
    }

    return maximum;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                scanf("%d", &input[i][j]);

        printf("%d\n", solve(n));
    }

    return 0;
}
