/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int minChanges(string s) {
        int len = s.size();
        int count = 0;

        for (int i = 0; i < len - 1; i += 2)
            if (s[i] != s[i + 1])
                count++;

        return count;
    }
};


/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful
 * Runtime: 4ms (30.85%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int minChanges(string s) {
        int len = s.size();
        int count = 0;
        int i = 0;

        while (i < len - 1) {
            if (s[i] != s[i + 1])
                count++;
            i += 2;
        }

        return count;
    }
};
