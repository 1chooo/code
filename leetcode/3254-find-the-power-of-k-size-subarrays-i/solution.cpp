/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> resultsArray(vector<int> &nums, int k) {
        vector<int> result;
        int left = 0;
        int consecutiveCount = 1;

        for (int right = 0; right < nums.size(); right++) {
            if (right > 0 &&
                nums[right - 1] + 1 == nums[right]) {
                consecutiveCount++;
            }

            if (right - left + 1 > k) {
                if (nums[left] + 1 == nums[left + 1]) {
                    consecutiveCount--;
                }
                left++;
            }

            if (right - left + 1 == k) {
                result.push_back(consecutiveCount == k ? nums[right] : -1);
            }
        }

        return result;
    }
};
