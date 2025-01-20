/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/first-completely-painted-row-or-column
 * Runtime: 90ms (73.78%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int firstCompleteIndex(
        vector<int> &arr, vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        unordered_map<int, pair<int, int>> positionMap;
        vector<int> rowCount(row, col);
        vector<int> colCount(col, row);

        for (int r = 0; r < row; ++r) {
            for (int c = 0; c < col; ++c) {
                positionMap[mat[r][c]] = {r, c};
            }
        }

        for (int i = 0; i < arr.size(); ++i) {
            int val = arr[i];
            auto [row, col] = positionMap[val];

            if (--rowCount[row] == 0 || --colCount[col] == 0) {
                return i;
            }
        }

        return -1;
    }
};
