/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int index = 1;

        while (ss >> word) {
            if (word.find(searchWord) == 0)
                return index;
            index++;
        }

        return -1;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
 * Runtime: 0ms (100.00%)
 */

class Solution {
  public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int prefixSize = searchWord.size();
        int wordIndex = 1;
        int charIndex = 0;
        bool isPrefix = true;

        for (char &c : sentence) {
            if (c == ' ') {
                if (isPrefix && charIndex >= prefixSize) {
                    return wordIndex;
                }
                wordIndex++;
                charIndex = 0;
                isPrefix = true;
            } else {
                if (charIndex < prefixSize) {
                    if (c != searchWord[charIndex]) {
                        isPrefix = false;
                    }
                }
                charIndex++;
            }
        }

        if (isPrefix && charIndex >= prefixSize) {
            return wordIndex;
        }

        return -1;
    }
};
