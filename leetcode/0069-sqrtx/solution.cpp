/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/sqrtx
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    int mySqrt(int x) {
        long long l = 0, r = x;

        while (l < r) {
            long long mid = (l + r + 1) / 2;
            if (mid * mid <= x) l = mid;
            else r = mid - 1;
        }
        
        return l;
    }
};