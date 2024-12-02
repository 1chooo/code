/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/check-if-n-and-its-double-exist/
 * Runtime: ms (%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool checkIfExist(vector<int> &arr) {
        unordered_set<int> seen;
        for (int num : arr) {
            if (seen.count(num * 2) ||
                (num % 2 == 0 && seen.count(num / 2))) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};
