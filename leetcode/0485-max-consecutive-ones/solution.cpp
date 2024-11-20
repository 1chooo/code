/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/max-consecutive-ones
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                count++;
            } else {
                if (count > maxCount) {
                    maxCount = count;
                }
                count = 0;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
        return maxCount;
    }
};
