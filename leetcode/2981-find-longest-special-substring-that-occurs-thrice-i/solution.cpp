/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/
 * Runtime: 31ms (31.22%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maximumLength(string s) {
        list<string> substrings;

        for (int i = 0; i < s.size(); i++) {
            int end = i;
            while (end < s.size() && s[end] == s[i]) {
                substrings.push_back(s.substr(i, end - i + 1));
                end++;
            }
        }

        unordered_map<string, int> substringFrequency;

        for (const string &sub : substrings) {
            substringFrequency[sub]++;
        }

        int maxLen = 0;

        for (const auto &[sub, count] : substringFrequency) {
            if (count >= 3) {
                maxLen = max(maxLen, (int)sub.size());
            }
        }

        return maxLen == 0 ? -1 : maxLen;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/
 * Runtime: 27ms (31.65%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maximumLength(string s) {
        list<string> substrings;

        for (int i = 0; i < s.size(); i++) {
            int end = i;
            while (end < s.size() && s[end] == s[i]) {
                substrings.push_back(s.substr(i, end - i + 1));
                end++;
            }
        }

        unordered_map<string, int> substringFrequency;

        for (list<string>::iterator it = substrings.begin(); it != substrings.end(); ++it) {
            substringFrequency[*it]++;
        }

        int maxLen = 0;

        for (unordered_map<string, int>::iterator it = substringFrequency.begin();
             it != substringFrequency.end();
             ++it) {
            if (it->second >= 3) {
                maxLen = max(maxLen, static_cast<int>(it->first.size()));
            }
        }

        return maxLen == 0 ? -1 : maxLen;
    }
};

/**
 * Author: justin0u0<mail@justin0u0.com>
 * Problem: https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/
 * Runtime: 0ms (100.00%)
 */
class Solution {
public:
  int maximumLength(string& s) {
    s.push_back('$');
    int mx[128] = {0};
    int mx2[128] = {0};
    int mx3[128] = {0};
    int count = 1;

    for (int i = 0; i < s.length() - 1; ++i) {
      if (s[i] != s[i + 1]) {
        if (count > mx[s[i]]) {
          mx3[s[i]] = mx2[s[i]];
          mx2[s[i]] = mx[s[i]];
          mx[s[i]] = count;
        } else if (count > mx2[s[i]]) {
          mx3[s[i]] = mx2[s[i]];
          mx2[s[i]] = count;
        } else if (count > mx3[s[i]]) {
          mx3[s[i]] = count;
        }
        count = 1;
      } else {
        ++count;
      }
    }

    int answer = 0;
    
    for (int i = 'a'; i <= 'z'; ++i) {
      answer = max(answer, mx[i] - 2);
      answer = max(answer, min(mx[i] - 1, mx2[i]));
      answer = max(answer, min(mx[i], min(mx2[i], mx3[i])));
    }

    if (answer == 0) {
      return -1;
    }
    
    return answer;
  }
};
