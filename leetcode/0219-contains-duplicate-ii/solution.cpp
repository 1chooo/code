/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/contains-duplicate-ii
 * Runtime: 55ms (74.93%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool containsNearbyDuplicate(std::vector<int> &nums, int k) {
        std::unordered_map<int, int> numIndices;

        for (int i = 0; i < nums.size(); ++i) {
            int n = nums[i];
            if (numIndices.find(n) != numIndices.end() &&
                i - numIndices[n] <= k) {
                return true;
            } else {
                numIndices[n] = i;
            }
        }
        return false;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/contains-duplicate-ii
 * Runtime: 1778ms (13.31%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        int n = nums.size();
        int i = 0;
        if (k == 0) {
            return false;
        }
        while (i < n) {
            int j = i + 1;
            while (j <= i + k && j < n) {
                if (nums[i] == nums[j])
                    return true;
                j++;
            }
            i++;
        }

        return false;
    }
};
