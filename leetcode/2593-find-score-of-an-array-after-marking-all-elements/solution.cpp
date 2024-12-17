/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/
 * Runtime: 47ms (98.56%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    long long findScore(vector<int> &nums) {
        int arraySize = nums.size();
        vector<pair<int, int>> valueIndexPairs(arraySize);

        for (int i = 0; i < arraySize; i++) {
            valueIndexPairs[i] = {nums[i], i};
        }

        sort(valueIndexPairs.begin(), valueIndexPairs.end());

        long long totalScore = 0;

        for (int i = 0; i < arraySize; i++) {
            int currentValue = valueIndexPairs[i].first;
            int currentIndex = valueIndexPairs[i].second;

            if (nums[currentIndex] != -1) {
                totalScore += currentValue;
                nums[currentIndex] = -1;
                if (currentIndex > 0) {
                    nums[currentIndex - 1] = -1;
                }
                if (currentIndex < arraySize - 1) {
                    nums[currentIndex + 1] = -1;
                }
            }
        }

        return totalScore;
    }
};
