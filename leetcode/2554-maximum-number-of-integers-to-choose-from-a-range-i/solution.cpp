/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/
 * Runtime: 155ms (75.57%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maxCount(vector<int> &banned, int n, int maxSum) {
        if (maxSum == 1)
            return 0;

        unordered_set<int> bannedSet(banned.begin(), banned.end());

        int sum = 0;
        int count = 0;

        for (int i = 1; i <= n; i++) {
            if (bannedSet.count(i))
                continue;
            sum += i;
            if (sum > maxSum)
                return count;
            count++;
        }

        return count;
    }
};

/**
 * Author: https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/solutions/6117744/use-bitset-to-mark-x-in-banned-vs-sort-math-beats-100/
 * Problem: https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maxCount(vector<int> &banned, int n, int maxSum) {
        bitset<10001> xNot = 0;
        int sum = 0, cnt = 0;

        for (int x : banned)
            xNot[x] = 1;
            
        for (int x = 1; x <= n && sum <= maxSum; x++) {
            if (!xNot[x]) {
                sum += x;
                cnt++;
            }
        }
        
        return (sum <= maxSum) ? cnt : cnt - 1;
    }
};
