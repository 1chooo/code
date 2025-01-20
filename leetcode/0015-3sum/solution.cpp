/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/3sum
 * Runtime: 49ms (61.76%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int current = 0; current < nums.size(); current++) {
            if (current > 0 && nums[current] == nums[current - 1]) {
                continue;
            }

            int left = current + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[current] + nums[left] + nums[right];

                if (sum > 0) {
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    result.push_back({nums[current], nums[left], nums[right]});
                    left++;

                    while (nums[left] == nums[left - 1] && left < right) {
                        left++;
                    }
                }
            }
        }

        return result;
    }
};
