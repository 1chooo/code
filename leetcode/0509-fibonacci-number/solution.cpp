/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/fibonacci-number/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    int fib(int n) {
        vector<int> ans(n + 1);

        for (int i = 0; i <= n; i++) {
            if (i < 2) {
                ans[i] = i;
            } else {
                ans[i] = ans[i - 1] + ans[i - 2];
            }
        }

        return ans[n];
    }
};