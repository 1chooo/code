/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/minimum-string-length-after-removing-substrings
 * Runtime: 3ms (89.08%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        for (char c : s) {
            if (stk.empty()) {
                stk.push(c);
                continue;
            }

            if (c == 'B' && stk.top() == 'A') {
                stk.pop();
            } else if (c == 'D' && stk.top() == 'C') {
                stk.pop();
            } else {
                stk.push(c);
            }
        }
        return stk.size();
    }
};
