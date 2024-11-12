/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/pass-the-pillow/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    int passThePillow(int n, int time) {
        if ((time / (n - 1) & 1) != 0) {
            return n - time % (n - 1);
        }

        return time % (n - 1) + 1;
    }
};
