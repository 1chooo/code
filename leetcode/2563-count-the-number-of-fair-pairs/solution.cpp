/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/count-the-number-of-fair-pairs
 * Runtime: 27ms (94.05%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    long long countFairPairs(std::vector<int> &nums, int lower, int upper) {
        std::sort(nums.begin(), nums.end());

        return countLess(nums, upper) - countLess(nums, lower - 1);
    }

  private:
    long long countLess(const std::vector<int> &nums, int sum) {
        long long res = 0;
        int j = nums.size() - 1;
        for (int i = 0; i < j; ++i) {
            while (i < j && nums[i] + nums[j] > sum) {
                --j;
            }
            res += j - i;
        }
        return res;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/count-the-number-of-fair-pairs
 * Runtime: 66ms (54.76%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    long long countFairPairs(vector<int> &nums, int lower, int upper) {
        long long res = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int l = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
            int r = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
            res += r - l;
        }

        return res;
    }
};
