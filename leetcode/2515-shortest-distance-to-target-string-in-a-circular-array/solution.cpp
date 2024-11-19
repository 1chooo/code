/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  private:
    int circularDistance(int i, int startIndex, int n) {
        return min(abs(i - startIndex), n - abs(i - startIndex));
    }

  public:
    int closetTarget(vector<string> &words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                ans = min(ans, circularDistance(i, startIndex, n));
            }
        }
        if (ans == INT_MAX) return -1;
        
        return ans;
    }
};
