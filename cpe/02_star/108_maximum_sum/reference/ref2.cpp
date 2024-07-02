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