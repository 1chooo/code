/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    static bool canMakeSubsequence(string &str1, string &str2) {
        const int sourceLength = str1.size(), targetLength = str2.size();
        char currentTargetChar = str2[0];

        int sourceIndex, targetIndex;
        for (sourceIndex = 0, targetIndex = 0;
             sourceIndex < sourceLength &&
             targetIndex < targetLength;
             sourceIndex++) {
            char currentSourceChar = str1[sourceIndex];

            if (currentSourceChar == currentTargetChar ||
                currentSourceChar + 1 == currentTargetChar ||
                (currentSourceChar == 'z' && currentTargetChar == 'a')) {
                currentTargetChar = str2[++targetIndex];
            }
        }

        return targetIndex == targetLength;
    }
};
