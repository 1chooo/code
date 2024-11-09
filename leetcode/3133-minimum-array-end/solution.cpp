/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/minimum-array-end
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    long minEnd(int n, int x) {
        long result = x;
        long remaining = n - 1;
        long position = 1;

        while (remaining) {
            if (!(x & position)) {
                result |= (remaining & 1) * position;
                remaining >>= 1;
            }
            position <<= 1;
        }

        return result;
    }
};

class Solution {
  public:
    long long minEnd(int n, int x) {
        n--;
        vector<int> xBit(64, 0);
        vector<int> nBit(64, 0);
        for (int i = 0; i < 32; i++) {
            xBit[i] = (x >> i) & 1;
            nBit[i] = (n >> i) & 1;
        }

        int i = 0, j = 0;
        while (i < 64) {
            if (xBit[i]) {
                i++;
                continue;
            }
            xBit[i++] = nBit[j++];
        }

        long long ans = 0;
        for (int i = 0; i < 64; i++) {
            ans += xBit[i] * (1ll << i);
        }

        return ans;
    }
};

#include <bitset>
class Solution {
  public:
    long long minEnd(int n, int x) {
        std::bitset<64> X(x), N(n - 1), result(0);

        int j = 0;
        for (int i = 0; i < 64; i++) {
            if (X[i]) {
                result[i] = 1;
            } else {
                result[i] = N[j];
                j++;
            }
        }

        return result.to_ullong();
    }
};