/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-if-array-can-be-sorted
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
public:
    static bool canSortArray(const vector<int>& nums) {
        uint16_t preMax = 0, currentMin = 0, currentMax = 0;
        uint8_t prevBitCount = 0;

        for (const uint16_t num : nums) {
            const uint8_t currentBitCount = popcount(num);
            if (prevBitCount == currentBitCount) {
                currentMin = min(currentMin, num);
                currentMax = max(currentMax, num);
            } else if (currentMin < preMax) {
                return false;
            } else {
                preMax = currentMax;
                currentMin = currentMax = num;
                prevBitCount = currentBitCount;
            }
        }
        return currentMin >= preMax;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-if-array-can-be-sorted
 * Runtime: 11ms (17.27%)
 */

class Solution {
  public:
    // Helper function to count set bits in a number
    int countSetBits(int num) {
        int count = 0;
        for (int i = 31; i >= 0; --i) {
            if ((num >> i) & 1) {
                count++;
            }
        }
        return count;
    }

    // Helper function to check if the array is sorted
    bool check(const vector<int> &nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool canSortArray(vector<int> &nums) {
        // Vector to store the set bit count of each number
        int i;
        vector<int> count(nums.size());

        for (i = 0; i < nums.size(); i++)
            count[i] = countSetBits(nums[i]);

        int n = nums.size();
        i = 0;
        while (i < n) {
            for (int j = 1; j < n; j++) {
                if (count[j] == count[j - 1] &&
                    nums[j] < nums[j - 1]) {
                    swap(nums[j], nums[j - 1]); // Swap elements
                }
            }
            if (check(nums)) {
                return true;
            }
            i++;
        }
        return false;
    }
};
