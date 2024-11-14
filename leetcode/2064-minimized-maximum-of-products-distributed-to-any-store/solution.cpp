/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store
 * Runtime: 21ms (93.63%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  private:
    bool canDistribute(int n, vector<int> &quantities, int mid) {
        int stores = 0;
        for (auto x : quantities) {
            stores += x / mid;
            if (x % mid) stores++;
            if (stores > n) return 0;
        }
        return stores <= n;
    }

  public:
    int minimizedMaximum(int n, vector<int> &quantities) {
        int s = 1, e = 100000, ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (canDistribute(n, quantities, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};