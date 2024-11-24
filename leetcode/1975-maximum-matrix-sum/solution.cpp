/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/maximum-matrix-sum/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int minValue = INT_MAX;
        long long sum = 0;
        int negCount = 0;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] < 0)
                    negCount++;
                int absValue = abs(matrix[i][j]);
                minValue = min(minValue, absValue);
                sum += absValue;
            }
        }

        if (negCount % 2 == 0)
            return sum;
        return sum - 2 * minValue;
    }
};
