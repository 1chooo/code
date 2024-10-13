/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/
 * Runtime: 36ms (99.34%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  private:
    int pairs[100001];

  public:
    bool canArrange(vector<int> &arr, int k) {
        memset(pairs, 0, k * sizeof(int));
        for (int num : arr) {
            ++pairs[(num % k + k) % k];
        }
        for (int i = 1; i <= k / 2; ++i) {
            if (pairs[i] != pairs[k - i]) {
                return false;
            }
        }
        return !(pairs[0] & 1);
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/
 * Runtime: 36ms (99.34%)
 */

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k, 0);
        for (int num : arr) {
            int reminder = num % k;
            if (reminder < 0) {     // handle negative number
                reminder += k;
            }
            freq[reminder]++;
        }
        
        if (freq[0] % 2 != 0) {
            return false;
        }
        
        for (int i = 1; i <= k / 2; i++) {
            if (freq[i] != freq[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};
