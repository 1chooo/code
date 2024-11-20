/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/
 * Runtime: 8ms (79.02%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        int l = 0, r = 0;
        int ans = n;
        int countA = 0, countB = 0, countC = 0;
        int totalA = 0, totalB = 0, totalC = 0;

        for (char ch : s) {
            if (ch == 'a')
                totalA++;
            else if (ch == 'b')
                totalB++;
            else if (ch == 'c')
                totalC++;
        }

        if (totalA < k ||
            totalB < k ||
            totalC < k) {
            return -1;
        }

        while (r < n) {
            if (s[r] == 'a')
                countA++;
            if (s[r] == 'b')
                countB++;
            if (s[r] == 'c')
                countC++;
            r++;

            while (countA > totalA - k ||
                   countB > totalB - k ||
                   countC > totalC - k) {
                if (s[l] == 'a')
                    countA--;
                if (s[l] == 'b')
                    countB--;
                if (s[l] == 'c')
                    countC--;
                l++;
            }

            ans = min(ans, n - (r - l));
        }

        return ans;
    }
};
