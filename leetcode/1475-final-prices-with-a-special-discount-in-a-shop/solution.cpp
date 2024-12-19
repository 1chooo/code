/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;

        for (int i = 0; i < prices.size(); i++) {
            while (!s.empty() && prices[s.top()] >= prices[i]) {
                prices[s.top()] -= prices[i];
                s.pop();
            }
            s.push(i);
        }

        return prices;
    }
};
