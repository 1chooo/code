/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.size();

        if (haystack == needle) {
            return 0;
        }

        for (int i = 0; i < haystack.size(); i++) {
            if (haystack.substr(i, needleSize) == needle) {
                return i;
            }
        }

        return -1;
    }
};
