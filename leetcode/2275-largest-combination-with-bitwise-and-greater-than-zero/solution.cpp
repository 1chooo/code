/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero
 * Runtime: 15ms (92.54%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int largestCombination(vector<int> &candidates) {
        int ans = 0;

        for (int i = 0; i < 24; i++) {
            int count = 0;
            for (auto candidate : candidates)
                count += (candidate >> i) & 1;
            ans = max(ans, count);
        }

        return ans;
    }
};
