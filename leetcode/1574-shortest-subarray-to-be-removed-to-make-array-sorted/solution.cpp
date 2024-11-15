/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int findLengthOfShortestSubarray(vector<int> &arr) {
        int n = arr.size();

        int left = 0;
        while (left + 1 < n &&
               arr[left] <= arr[left + 1]) {
            left++;
        }

        if (left == n - 1)
            return 0;

        int right = n - 1;
        while (right > 0 && arr[right - 1] <= arr[right]) {
            right--;
        }

        int result = min(n - left - 1, right);

        int i = 0, j = right;
        while (i <= left && j < n) {
            if (arr[i] <= arr[j]) {
                result = min(result, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return result;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int findLengthOfShortestSubarray(vector<int> &arr) {
        int n = arr.size(), l{0}, r = n - 1;

        while (l + 1 < n && arr[l] <= arr[l + 1])
            ++l;

        if (l == n - 1) return 0;
        while (r > l && arr[r - 1] <= arr[r])
            --r;
            
        int res = min(n - l - 1, r);

        for (int i{0}, j = r; i <= l && j < n;)
            arr[i] <= arr[j] ? res = min(res, j - i++ - 1) : ++j;

        return res;
    }
};