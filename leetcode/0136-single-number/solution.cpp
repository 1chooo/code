/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/single-number
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int singleNumber(vector<int> &nums) {
        int result = 0;

        for (int num : nums)
            result ^= num;

        return result;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/single-number
 * Runtime: 20ms (7.91%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int singleNumber(vector<int> &nums) {
        set<int> s;

        for (auto i : nums)
            if (s.count(i))
                s.erase(i);
            else
                s.insert(i);

        return *s.begin();
    }
};
