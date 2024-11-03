/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/rotate-string
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string rotated = s;

        for (int i = 0; i < s.length(); i++) {
            if (rotated == goal)
                return true;
            
            char ch = rotated[0];
            rotated.erase(0, 1);
            rotated.push_back(ch);
        }
        return false;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/rotate-string
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        
        string doubled = s + s;

        return doubled.find(goal) != string::npos;
    }
};

