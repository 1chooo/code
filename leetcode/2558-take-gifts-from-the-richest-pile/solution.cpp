/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/take-gifts-from-the-richest-pile/
 * Runtime: 3ms (54.43%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> q;
        long long ans = 0;
        for (int i : gifts) {
            q.push(i);
            ans += i;
        }
        while (k--) {
            int v = q.top();
            ans -= (v - sqrt(v));
            q.pop();
            q.push(sqrt(v));
        }
        return ans;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/take-gifts-from-the-richest-pile/
 * Runtime: 321ms (5.15%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    long long pickGifts(vector<int> &gifts, int k) {
        while (k--) {
            sort(gifts.rbegin(), gifts.rend());
            int pile = gifts[0];
            gifts.erase(gifts.begin());
            gifts.push_back(sqrt(pile));
        }

        long long ans = 0;
        for (int u : gifts) {
            ans += u;
        }
        return ans;
    }
};
