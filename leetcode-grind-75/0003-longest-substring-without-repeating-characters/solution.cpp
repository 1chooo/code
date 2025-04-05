/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> vis(128, false);

        int answer = 0;
        int j = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            while (vis[s[i]]) {
                vis[s[j]] = false;
                ++j;
            }
            vis[s[i]] = true;

            answer = max(answer, i - j + 1);
        }

        return answer;
    }
};