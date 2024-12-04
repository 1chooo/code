/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/adding-spaces-to-a-string/
 * Runtime: 2ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    string addSpaces(string s, vector<int> &spaces) {
        string result(s.length() + spaces.size(), 0);
        int writePos = 0;
        int readPos = 0;

        for (int spacePos : spaces) {
            while (readPos < spacePos) {
                result[writePos++] = s[readPos++];
            }
            result[writePos++] = ' ';
        }
        while (readPos < s.length()) {
            result[writePos++] = s[readPos++];
        }
        return result;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/adding-spaces-to-a-string/
 * Runtime: 23ms (37.65%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    string addSpaces(string s, vector<int> &spaces) {
        string result;
        int spaceIndex = 0;

        for (int i = 0; i < s.size(); i++) {
            if (spaceIndex < spaces.size() &&
                i == spaces[spaceIndex]) {
                result += ' ';
                spaceIndex++;
            }
            result += s[i];
        }

        return result;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/adding-spaces-to-a-string/
 * Runtime: TLE
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    string addSpaces(string s, vector<int> &spaces) {
        string result;

        for (int i = 0; i < s.size(); i++) {
            if (i == spaces.front()) {
                result += ' ';
                spaces.erase(spaces.begin());
            }
            result += s[i];
        }

        return result;
    }
};
