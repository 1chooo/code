/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/excel-sheet-column-title
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    string convertToTitle(int columnNumber) {
        string result;

        while (columnNumber > 0) {
            columnNumber--;
            result += 'A' + columnNumber % 26;
            columnNumber /= 26;
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/excel-sheet-column-title
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    string convertToTitle(int columnNumber) {
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result = "";

        while (columnNumber > 0) {
            if (columnNumber % 26 == 0) {
                result = alpha[25] + result;
                columnNumber = columnNumber / 26 - 1;
            } else {
                result = alpha[columnNumber % 26 - 1] + result;
                columnNumber /= 26;
            }
        }

        return result;
    }
};
