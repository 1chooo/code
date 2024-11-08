/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/maximum-xor-for-each-query
 * Runtime: 0ms (100.00%)
 * Reference: https://leetcode.com/problems/maximum-xor-for-each-query/solutions/6021112/beats-100-very-short-simple-solution/
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> getMaximumXor(vector<int> &nums, int maximumBit) {
        int mask = (1LL << maximumBit) - 1;
        int n = nums.size();
        vector<int> res(n);

        for (int i = 0, curr = 0; i < n; i++) {
            curr ^= nums[i];
            res[n - i - 1] = ~curr & mask;
        }

        return res;
    }
};
