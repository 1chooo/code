/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/
 * Runtime: 2ms (35.28%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();

        while (k--) {
            int minIndex = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] < nums[minIndex]) {
                    minIndex = i;
                }
            }
            
            nums[minIndex] *= multiplier;
        }

        return nums;
    }
};
