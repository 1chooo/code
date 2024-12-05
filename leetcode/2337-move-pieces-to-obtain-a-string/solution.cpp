/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/move-pieces-to-obtain-a-string/
 * Runtime: 3ms (94.83%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    static bool canChange(string &start, string &target) {
        int n = start.size();

        for (int i = 0, j = 0;
             i < n || j < n; i++, j++) {
            while (i < n && start[i] == '_')
                i++;
            while (j < n && target[j] == '_')
                j++;
            char c = start[i];
            if (c != target[j])
                return false;
            if (c == 'L' && i < j)
                return false;       // 'L' should be moved to the right
            if (c == 'R' && i > j)
                return false;       // 'R' should be moved to the left
        }

        return true;
    }
};
