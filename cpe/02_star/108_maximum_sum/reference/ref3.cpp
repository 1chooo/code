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