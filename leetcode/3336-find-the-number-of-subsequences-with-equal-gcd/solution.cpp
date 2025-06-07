/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd
 * Runtime: 1219ms (44.48%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
    const int mod = 1e9 + 7;
    int dp[200][201][201] = {};

  public:
    int subsequencePairCount(vector<int> &nums) {
        memset(dp, -1, sizeof(dp));
        return solve(0, nums, 0, 0);
    }

    int solve(int i, vector<int> &nums, int first, int second) {
        // first == gcd of first subsequence till now
        // second = gcd of second subsequence till now

        if (i == nums.size()) {
            return (first && second) && (first == second);
        }

        if (dp[i][first][second] != -1) return dp[i][first][second];

        // Dont include this element in any subsequence
        int skip = solve(i + 1, nums, first, second);

        // Include this index in the first subsequence
        int take1 = solve(i + 1, nums, __gcd(first, nums[i]), second);

        // Include this index in the second subsequence
        int take2 = solve(i + 1, nums, first, __gcd(second, nums[i]));

        // Summing up all the possibilites
        return dp[i][first][second] = (0LL + skip + take1 + take2) % mod;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd
 * Runtime: 1329ms (31.82%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {

  public:
    int subsequencePairCount(vector<int> &A) {
        int mod = 1e9 + 7;
        int M = *max_element(A.begin(), A.end());
        vector<vector<int>> dp(M + 1, vector<int>(M + 1, 0));
        dp[0][0] = 1;

        for (int a : A) {
            vector<vector<int>> dp2(M + 1, vector<int>(M + 1, 0));
            for (int i = M; i >= 0; --i) {
                for (int j = M; j >= 0; --j) {
                    int v = dp[i][j];
                    int i2 = gcd(i, a);
                    int j2 = gcd(j, a);
                    dp2[i2][j] = (dp2[i2][j] + v) % mod;
                    dp2[i][j2] = (dp2[i][j2] + v) % mod;
                    dp2[i][j] = (dp2[i][j] + v) % mod;
                }
            }
            dp = move(dp2);
        }

        int res = 0;
        for (int i = 1; i <= M; ++i) {
            res = (res + dp[i][i]) % mod;
        }

        return res;
    }
};
