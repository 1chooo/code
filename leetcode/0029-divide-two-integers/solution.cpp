/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/divide-two-integers
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long absDividend = labs(dividend);
        long absDivisor = labs(divisor);
        long result = 0;
        int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;
        
        while (absDividend >= absDivisor) {
            long multipleDivisor = absDivisor, multiple = 1;
            while (multipleDivisor << 1 <= absDividend) {
                multipleDivisor <<= 1;
                multiple <<= 1;
            }
            absDividend -= multipleDivisor;
            result += multiple;
        }
        
        return sign * result;
    }
};
