/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/circular-sentence
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool isCircularSentence(string sentence) {
        int len = sentence.size();

        if (sentence[0] != sentence[len - 1])
            return false;

        for (int i = 1; i < len - 1; i++) {
            if (sentence[i] == ' ' &&
                sentence[i - 1] != sentence[i + 1])
                return false;
        }

        return true;
    }
};
