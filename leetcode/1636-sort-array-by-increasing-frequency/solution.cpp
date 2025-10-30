/*
 *  Author: Lin Hugo<hugo@1chooo.com>
 * Problem: https://leetcode.com/problems/sort-array-by-increasing-frequency
 * Runtime: 0ms (100.00%)
 */

class Solution {
  public:
    vector<int> frequencySort(vector<int> &nums) {
        int freq[201] = {0};
        for (int num : nums) {
            ++freq[num + 100];
        }

        const int n = nums.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = {freq[nums[i] + 100], nums[i]};
        }
        sort(arr.begin(), arr.end(), [&](pair<int, int> &lhs, pair<int, int> &rhs) {
            return lhs.first < rhs.first || (lhs.first == rhs.first && lhs.second > rhs.second);
        });
        for (int i = 0; i < n; ++i) {
            nums[i] = arr[i].second;
        }
        return nums;
    }
};