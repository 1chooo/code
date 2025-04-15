/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/intersection-of-two-arrays-ii/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> m;
        for (int num : nums1) {
            m[num]++;
        }

        std::vector<int> res;
        for (int num : nums2) {
            if (m[num] > 0) {
                res.push_back(num);
                m[num]--;
            }
        }

        return res;
    }
};
