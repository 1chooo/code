/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/two-sum/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hashMap;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (hashMap.find(num) != hashMap.end()) {
                return {hashMap[num], i};
            }
            hashMap[target - num] = i;
        }

        return {};
    }
};
