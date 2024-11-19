/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/defuse-the-bomb
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> decrypt(vector<int> &code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if (k == 0) {
            fill(code.begin(), code.end(), 0);
            return code;
        }

        for (int i = 0; i < n; i++) {
            int total = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    total += code[(i + j) % n];
                }
            }
            for (int j = 1; j <= -k; j++) {
                total += code[(i - j + n) % n];
            }

            ans[i] = total;
        }

        return ans;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/defuse-the-bomb
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> decrypt(vector<int> &code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);

        if (k == 0) {
            fill(code.begin(), code.end(), 0);
            return code;
        }

        if (k > 0) {
            for (int i = 0; i < n; i++) {
                for (int j = 1; j <= k; j++) {
                    ans[i] += code[(i + j) % n];
                }
            }
            return ans;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= -k; j++) {
                ans[i] += code[(i - j + n) % n];
            }
        }

        return ans;
    }
};
