/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/flip-columns-for-maximum-number-of-equal-rows
 * Runtime: 12ms (89.13%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix) {
        unordered_map<string, int> patternCount;

        for (const auto &row : matrix) {
            string pattern = "";

            // Generate a pattern string for this row based on the first row
            for (int j = 0; j < row.size(); ++j) {
                // Compare with the first element in the row to determine if flip is needed
                pattern += (row[j] ^ row[0]) ? '1' : '0';
            }

            // Increment the count for this pattern
            patternCount[pattern]++;
        }

        // Find the maximum count of rows with the same pattern
        int maxRows = 0;
        for (const auto &entry : patternCount) {
            maxRows = max(maxRows, entry.second);
        }

        return maxRows;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/flip-columns-for-maximum-number-of-equal-rows
 * Runtime: 42ms (44.93%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix) {
        const int m = matrix.size();
        const int n = matrix[0].size();
        int ans = 0;
        vector<int> flip(n);
        unordered_set<int> seen;
        for (int i = 0; i < m; ++i) {
            if (seen.contains(i))
                continue;
            int count = 0;
            for (int j = 0; j < n; ++j)
                flip[j] = 1 ^ matrix[i][j];
            for (int k = 0; k < m; ++k)
                if (matrix[k] == matrix[i] || matrix[k] == flip) {
                    seen.insert(k);
                    ++count;
                }
            ans = max(ans, count);
        }
        return ans;
    }
};
