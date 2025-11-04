/*
 *  Author: Lin Hugo<hugo@1chooo.com>
 * Problem: https://leetcode.com/problems/maximum-total-importance-of-roads
 * Runtime: 7ms (90.10%)
 */

class Solution {
  public:
    long long maximumImportance(int n, vector<vector<int>> &roads) {
        vector<int> deg(n, 0);
        for (const auto &e : roads) {
            ++deg[e[0]];
            ++deg[e[1]];
        }
        sort(deg.begin(), deg.end());
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += 1LL * (i + 1) * deg[i];
        }
        return sum;
    }
};