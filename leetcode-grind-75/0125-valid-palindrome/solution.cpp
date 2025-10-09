/**
 * Author: justin0u0<mail@justin0u0.com>
 * Problem: https://leetcode.com/problems/valid-palindrome/
 * Runtime: 3ms (90.35%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool isPalindrome(string &s) {
        int j = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
            if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z')) {
                s[j++] = s[i];
            }
        }

        for (int i = 0; i < (j >> 1); ++i) {
            if (s[i] != s[j - i - 1]) {
                return false;
            }
        }
        return true;
    }
};