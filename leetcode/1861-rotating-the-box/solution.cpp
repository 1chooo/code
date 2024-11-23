/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/rotating-the-box
 * Runtime: 131ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<vector<char>> rotateTheBox(vector<vector<char>> &box) {
        int m = box.size();
        int n = box[0].size();

        for (auto &row : box) {
            int dropPosition = n - 1;

            for (int currPos = n - 1; currPos >= 0; currPos--) {
                if (row[currPos] == '*') {
                    dropPosition = currPos - 1;
                } else if (row[currPos] == '#') {
                    swap(row[dropPosition], row[currPos]);
                    dropPosition--;
                }
            }
        }

        vector<vector<char>> rotatedBox(n, vector<char>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rotatedBox[j][m - 1 - i] = box[i][j];
            }
        }

        return rotatedBox;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/rotating-the-box
 * Runtime: 152ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<vector<char>> rotateTheBox(vector<vector<char>> &box) {
        int row = box.size();
        int col = box[0].size();

        vector<vector<char>> res(col, vector<char>(row, '.'));

        for (int r = 0; r < row; r++) {
            int i = col - 1;
            for (int c = col - 1; c >= 0; c--) {
                if (box[r][c] == '#') {
                    res[i][row - r - 1] = '#';
                    i--;
                } else if (box[r][c] == '*') {
                    res[c][row - r - 1] = '*';
                    i = c - 1;
                }
            }
        }

        return res;
    }
};