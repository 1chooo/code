/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/longest-square-streak-in-an-array
 * Runtime: 107ms (72.97%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  private:
    map<int, int> visited;
    int longest_length = -1;
    int sqrt_num;

  public:
    int longestSquareStreak(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        for (int num : nums) {
            sqrt_num = sqrt(num);
            if (sqrt_num * sqrt_num == num && visited.find(sqrt_num) != visited.end()) {
                visited[num] = visited[sqrt_num] + 1;
                longest_length = max(longest_length, visited[num]);
            } else {
                visited[num] = 1;
            }
        }

        return longest_length;
    }
};
