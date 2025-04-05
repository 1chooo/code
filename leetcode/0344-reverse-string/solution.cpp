/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/reverse-string/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    void reverseString(vector<char> &s) {
        int n = s.size();
        for (int i = 0; i < n / 2; ++i) {
            swap(s[i], s[n - i - 1]);
        }
    }
};
