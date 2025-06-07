/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/product_sumblems/partition-array-into-two-equal-product_sumduct-subsets/
 * Runtime: 3ms (61.79%)
 * Solution: https://leetcode.com/problems/partition-array-into-two-equal-product-subsets/solutions/6800421/basic-recursion-idea-and-intuition
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool solve(int curr, long long mul, int n, vector<int> &nums, long long target, unordered_set<int> &first) {
        if (curr >= n) return false;    // index out of bound
        if (mul == target) return true; // current product equals target
        if (mul > target) return false; // we can never go back to smaller value

        bool take = solve(curr + 1, mul * nums[curr], n, nums, target, first);
        // curr + 1 :           move to next element
        // mul * nums[curr] :   since we took current element, we multiplied it to previous product

        // if we got the target by taking current element we push current index in the set and return true
        if (take) {
            first.insert(curr);
            return true;
        }
        bool notTake = solve(curr + 1, mul, n, nums, target, first);
        // curr + 1 :   move to next element
        // mul :        since we did not take the current element, we pass the previous product to next call
        return notTake;
    }

    bool checkEqualPartitions(vector<int> &nums, long long target) {
        int n = nums.size();
        unordered_set<int> first;
        if (solve(0, 1, n, nums, target, first)) { // got the target using some elements
            if (first.size() == 0) return false;   // no elements left for second partition

            long long part2 = 1;
            for (int i = 0; i < n; i++) { // taking product of remaining elemnts
                if (first.count(i)) continue;
                part2 *= nums[i];
            }
            if (part2 == target) return true; // both partitions have product = target, we return true
        }
        return false; // false otherwhise
    }
};