/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/palindrome-number
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/palindrome-number
 * Runtime: 3ms (49.43%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool isPalindrome(int x) {
        if (x < 0 ||
            (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;

        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        return x == revertedNumber || x == revertedNumber / 10;
    }
};
