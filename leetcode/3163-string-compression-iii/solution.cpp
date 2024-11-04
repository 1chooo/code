/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/string-compression-iii
 * Runtime: 11ms (94.02%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    string compressedString(string word) {
        string result = "";
        char comp = word[0];
        int count = 1;
        int len = word.size();

        for (int i = 1; i < len; i++) {
            if (word[i] == comp && count < 9) {
                count++;
            } else {
                result.push_back(count + '0');
                result.push_back(comp);

                comp = word[i];
                count = 1;
            }
        }

        result.push_back(count + '0');
        result.push_back(comp);

        return result;
    }
};

/**
 * Author: https://leetcode.com/problems/string-compression-iii/solutions/6004398/efficient-string-compression-group-characters-up-to-9-repeats/
 * Problem: https://leetcode.com/problems/string-compression-iii
 * Runtime:
 */

class Solution {
  public:
    string compressedString(string word) {
        string comp = "";
        int i = 0;

        while (i < word.size()) {
            char c = word[i];
            int count = 0;
            while (i < word.size() && word[i] == c && count < 9) {
                i++;
                count++;
            }
            comp += to_string(count) + c;
        }

        return comp;
    }
};
