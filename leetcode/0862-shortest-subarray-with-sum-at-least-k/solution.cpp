/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k
 * Runtime: 19ms (97.68%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int shortestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        vector<long> pref(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            pref[i + 1] = pref[i] + nums[i];
        }
        
        deque<int> dq;

        int ans = n + 1;
        for (int right = 0; right <= n; ++right) {
            while (!dq.empty() &&
                   pref[right] <= pref[dq.back()]) {
                dq.pop_back();
            }
            while (!dq.empty() &&
                   pref[right] - pref[dq.front()] >= k) {
                ans = min(ans, right - dq.front());
                dq.pop_front();
            }
            dq.push_back(right);
        }
        return ans == n + 1 ? -1 : ans;
    }
};
