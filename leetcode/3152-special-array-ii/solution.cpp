/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/special-array-ii/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<bool> isArraySpecial(
        vector<int> &nums,
        vector<vector<int>> &queries) {
        int n = nums.size();
        int m = queries.size();
        int prev = nums[0] & 1;
        vector<int> sameParity(n, 0);
        vector<bool> ans(m, 0);

        for (int i = 1, j = 0; i < n; i++) {
            bool x = nums[i] & 1;
            if (x == prev)
                j++;
            sameParity[i] = j;
            prev = x;
        }

        for (int i = 0; i < m; i++) {
            int s = queries[i][0], t = queries[i][1];
            ans[i] = (sameParity[s] == sameParity[t]);
        }

        return ans;
    }
};
