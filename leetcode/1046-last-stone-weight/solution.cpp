/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/last-stone-weight/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int lastStoneWeight(vector<int> &stones) {
        priority_queue<int> pq;

        for (int i = 0; i < stones.size(); i++)
            pq.push(stones[i]);

        while (pq.size() > 1) {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();

            if (x != y) {
                int rem = y - x;
                pq.push(rem);
            }
        }

        if (pq.size() == 1)
            return pq.top();

        return 0;
    }
};
