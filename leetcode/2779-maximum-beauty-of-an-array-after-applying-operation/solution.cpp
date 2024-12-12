/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/
 * Runtime: 13ms (93.41%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int maximumBeauty(vector<int> &nums, int k) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            minimum = min(minimum, nums[i]);
            maximum = max(maximum, nums[i]);
        }

        int maxTotal = min(100000, maximum + k);
        int minTotal = max(0, minimum - k);
        int range = maxTotal - minTotal + 1;
        vector<int> freq(range, 0);

        // Updating frequency array
        for (int i = 0; i < nums.size(); i++) {
            int left = max(minTotal, nums[i] - k);
            int right = min(maxTotal, nums[i] + k);
            freq[left - minTotal]++;

            // Mark the end of range in the frequency array freq[]
            if (right + 1 <= maxTotal) {
                freq[right + 1 - minTotal]--;
            }
        }

        int currentBeauty = 0;
        int maxBeauty = 0;

        // Calculate maximum beauty
        for (int i = 0; i < range; i++) {
            currentBeauty += freq[i];
            maxBeauty = max(maxBeauty, currentBeauty);
            // If beauty reaches the length of nums, return
            if (maxBeauty == nums.size()) {
                return maxBeauty;
            }
        }

        return maxBeauty;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/
 * Runtime: 13ms (93.41%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    static int maximumBeauty(vector<int> &nums, int k) {
        int freq[100001] = {0};
        int xMax = 0, xMin = 1e6;
        for (int x : nums) {
            freq[x]++;
            xMax = max(x, xMax);
            xMin = min(x, xMin);
        }
        int cnt = 0, maxCnt = 0;
        for (int l = xMin, r = xMin; r <= xMax; r++) {
            cnt += freq[r];
            while (r - l > 2 * k) {
                cnt -= freq[l];
                l++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/
 * Runtime: 13ms (93.41%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    static int maximumBeauty(vector<int> &nums, int k) {
        auto [xMin, xMax] = minmax_element(nums.begin(), nums.end());
        const int a = *xMin, N = *xMax - a;
        vector<int> freq(N + 1, 0);
        for (int x : nums)
            freq[x - a]++;

        int cnt = 0, maxCnt = 0;
        for (int l = 0, r = 0; r <= N; r++) {
            cnt += freq[r];
            if (r - l > 2 * k) {
                cnt -= freq[l];
                l++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};
