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
    int longestLength = -1;
    int sqrtNum = 0;

  public:
    int longestSquareStreak(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        for (int num : nums) {
            sqrtNum = sqrt(num);
            if (sqrtNum * sqrtNum == num && visited.find(sqrtNum) != visited.end()) {
                visited[num] = visited[sqrtNum] + 1;
                longestLength = max(longestLength, visited[num]);
            } else {
                visited[num] = 1;
            }
        }

        return longestLength;
    }
};
