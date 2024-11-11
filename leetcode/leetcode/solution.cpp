/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/prime-subtraction-operation
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    bool primeSubOperation(vector<int> &nums) {
        int maxElement = getMaxElement(nums);

        vector<bool> sieve(maxElement + 1, true);
        sieve[1] = false;
        for (int i = 2; i <= sqrt(maxElement + 1); i++)
            if (sieve[i])
                for (int j = i * i; j <= maxElement; j += i)
                    sieve[j] = false;

        int currValue = 1;
        int i = 0;
        while (i < nums.size()) {
            int difference = nums[i] - currValue;

            if (difference < 0)
                return false;

            if (sieve[difference] == true ||
                difference == 0) {
                i++;
                currValue++;
            } else {
                currValue++;
            }
        }
        return true;
    }

  private:
    int getMaxElement(vector<int> &nums) {
        int max = -1;
        for (int num : nums)
            if (num > max)
                max = num;
        return max;
    }
};

class Solution {
  public:
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021};

    bool primeSubOperation(vector<int> &nums) {
        int prev = 0;
        for (int num : nums) {
            if (num <= prev) {
                return false;
            }
            auto it = lower_bound(primes.begin(), primes.end(), num - prev);
            int i = it - primes.begin() - 1;
            if (i != -1) {
                num -= primes[i];
            }
            prev = num;
        }
        return true;
    }
};
