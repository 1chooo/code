// problem: http://uva.onlinejudge.org/external/1/108.html
// coded by jong10

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

int main() {
    int N, num;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &num);
            input[i][j] = num;
        }
    }
    printf("%d\n", solve(N));
    return 0;
}

/*******************************************************/
/* UVa 108 Maximum Sum                                 */
/* Author: Maplewing [at] knightzone.studio            */
/* Version: 2012/03/14                                 */
/*******************************************************/
#include <climits>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int N;
    int array[105][105];
    int max_sum, sum;
    while (scanf("%d", &N) != EOF) {
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                scanf("%d", &array[i][j]);

        int column_array[105][105] = {0};
        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                column_array[i][j] = column_array[i - 1][j] + array[i][j];

        max_sum = INT_MIN;
        for (int i = 1; i <= N; i++)
            for (int j = i; j <= N; j++) {
                sum = 0;
                for (int k = 1; k <= N; k++) {
                    sum += column_array[j][k] - column_array[i - 1][k];
                    if (sum > max_sum)
                        max_sum = sum;
                    if (sum < 0)
                        sum = 0;
                }
            }
        printf("%d\n", max_sum);
    }
    return 0;
}

/* 20151102
 * hanting
 * UVa 108 - Maximum Sum
 * C++
 */
#include <iostream>
#include <vector>
using namespace std;
int MaxRectangleSum(vector<vector<int>> &table, int m, int n) {
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            table[i][j] += table[i - 1][j];
        }
    }
    int MaxSum = table[0][0];
    int arr[n];
    for (int low = 0; low < m; low++) {
        for (int up = low; up < m; up++) {
            if (low) {
                arr[0] = table[up][0] - table[low - 1][0];
                for (int i = 1; i < n; i++) {
                    int tmp = table[up][i] - table[low - 1][i];
                    arr[i] = max(arr[i - 1] + tmp, tmp);
                    MaxSum = max(MaxSum, arr[i]);
                }
            } else {
                arr[0] = table[up][0];
                for (int i = 1; i < n; i++) {
                    int tmp = table[up][i];
                    arr[i] = max(arr[i - 1] + tmp, tmp);
                    MaxSum = max(MaxSum, arr[i]);
                }
            }
        }
    }
    return MaxSum;
}
int main() {
    int N;
    while (cin >> N) {
        vector<vector<int>> table(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> table[i][j];
            }
        }
        cout << MaxRectangleSum(table, N, N) << endl;
        ;
    }

    return 0;
}

/**
 * UVa 108 Maximum Sum
 * Author: chchwy
 * Last Modified: 2011.10.08
 * Tag: Dynamic Programming
 */
#include <climits>
#include <cstdio>
#include <cstring>

enum {
    MAX_DIM = 100 + 1
};

int subMatrixSum(int sumTable[][MAX_DIM], int x1, int y1, int x2, int y2) {
    int sum = sumTable[x2][y2] - sumTable[x1 - 1][y2] - sumTable[x2][y1 - 1] + sumTable[x1 - 1][y1 - 1];
    return sum;
}

int main() {
    int dimension; // the dimension of matrix
    int sumTable[MAX_DIM][MAX_DIM];

    while (scanf("%d", &dimension) == 1) {
        memset(sumTable, 0, sizeof(sumTable));

        // Build Sum Table
        for (int i = 1; i <= dimension; ++i) {
            for (int j = 1; j <= dimension; ++j) {
                int value;
                scanf("%d", &value);
                sumTable[i][j] = sumTable[i - 1][j] + sumTable[i][j - 1] - sumTable[i - 1][j - 1] + value;
            }
        }

        int max_sum = INT_MIN;

        // position (x1,y1)
        for (int x1 = 1; x1 <= dimension; ++x1) {
            for (int y1 = 1; y1 <= dimension; ++y1) {
                // position (x2,y2)
                for (int x2 = x1; x2 <= dimension; ++x2) {
                    for (int y2 = y1; y2 <= dimension; ++y2) {
                        int sum = subMatrixSum(sumTable, x1, y1, x2, y2);
                        if (sum > max_sum)
                            max_sum = sum;
                    }
                }
            }
        }
        printf("%d\n", max_sum);
    }
    return 0;
}

/*
 * Sai Cheemalapati
 * UVA 108: Maximum sum
 *
 */

#include <algorithm>
#include <cstdio>

using namespace std;

int N;
int A[110][110];

int main() {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
            if (i > 0)
                A[i][j] += A[i - 1][j];
            if (j > 0)
                A[i][j] += A[i][j - 1];
            if (i > 0 && j > 0)
                A[i][j] -= A[i - 1][j - 1];
        }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = i; k < N; k++) {
                for (int l = j; l < N; l++) {
                    int cur = A[k][l];
                    if (i > 0)
                        cur -= A[i - 1][l];
                    if (j > 0)
                        cur -= A[k][j - 1];
                    if (i > 0 && j > 0)
                        cur += A[i - 1][j - 1];
                    ans = max(ans, cur);
                }
            }
        }
    }
    printf("%d\n", ans);
}

#include <bits/stdc++.h>
using namespace std;
const size_t MAXN(200);
int arr[MAXN][MAXN]; // init 0

int solv(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            arr[i][j] += arr[i][j - 1]; // prefix
    }
    int ans = -1e9;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int r = 0, t = 0;
            for (int k = 1; k <= n; ++k) {
                t = arr[k][j] - arr[k][i - 1];
                // cout<<i<<' '<<j<<' '<<t<<endl;
                r = (t + r > 0) ? r + t : 0;
                ans = max(ans, r);
            }
        }
    }
    return ans;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> arr[i][j];
            }
        }
        cout << solv(n) << '\n';
    }
    return 0;
}