/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/merge-sorted-array/
 * Runtime: 2ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        vector<int> nums1Copy = nums1;
        vector<int> nums2Copy = nums2;

        int p = 0, p1 = 0, p2 = 0;

        while (p1 < m && p2 < n) {
            if (nums1Copy[p1] <= nums2Copy[p2]) {
                nums1[p++] = nums1Copy[p1++];
            } else {
                nums1[p++] = nums2Copy[p2++];
            }
        }

        while (p1 < m)
            nums1[p++] = nums1Copy[p1++];

        while (p2 < n)
            nums1[p++] = nums2Copy[p2++];
    }
};