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

int solve(int N) {
    // set sum(input[1][1] ~ input[i][j]) to sum[i][j]
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= N; j++)
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + input[i][j] - sum[i - 1][j - 1];

    // for debug
    // print_arr(sum, N);

    // get maximum sum of sum(input[i][j] ~ input[x][y])
    int maximum = INT_MIN;
    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N; y++) {
            for (int i = 0; i <= x; i++) {
                for (int j = 0; j <= y; j++) {
                    // the s is sum of [i][j] ~ [x][y])
                    int s = sum[x][y] - sum[i][y] - sum[x][j] + sum[i][j];
                    maximum = max(maximum, s);
                }
            }
        }
    }

    return maximum;
}
