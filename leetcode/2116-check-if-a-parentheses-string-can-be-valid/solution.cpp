/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/
 * Runtime: ms (%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool canBeValid(string s, string locked) {
        int n = s.size();

        if (n % 2)
            return false;

        stack<int> openIndices;
        stack<int> unlockedIndices;

        for (int i = 0; i < n; i++) {
            if (locked[i] == '0') {
                unlockedIndices.push(i);
            } else if (s[i] == '(') {
                openIndices.push(i);
            } else if (s[i] == ')') {
                if (!openIndices.empty()) {
                    openIndices.pop();
                } else if (!unlockedIndices.empty()) {
                    unlockedIndices.pop();
                } else {
                    return false;
                }
            }
        }

        while (!openIndices.empty() &&
               !unlockedIndices.empty() &&
               openIndices.top() < unlockedIndices.top()) {
            openIndices.pop();
            unlockedIndices.pop();
        }

        if (openIndices.empty() && !unlockedIndices.empty()) {
            return unlockedIndices.size() % 2 == 0;
        }

        return openIndices.empty();
    }
};
