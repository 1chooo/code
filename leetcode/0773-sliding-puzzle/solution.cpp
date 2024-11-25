/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/sliding-puzzle/
 * Runtime: 3ms (92.73%)
 * https://leetcode.com/problems/sliding-puzzle/solutions/6080339/easy-to-understand-using-bfs/
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int slidingPuzzle(vector<vector<int>> &board) {
        string s = "";
        for (auto &r : board) {
            for (int n : r) {
                s += to_string(n);
            }
        }

        string g = "123450";

        vector<vector<int>> n = {
            {1, 3},
            {0, 2, 4},
            {1, 5},
            {0, 4},
            {1, 3, 5},
            {2, 4}};

        queue<pair<string, int>> q;
        unordered_set<string> v;

        q.push({s, 0});
        v.insert(s);

        while (!q.empty()) {
            auto [c, m] = q.front();
            q.pop();

            if (c == g) return m;

            int z = c.find('0');

            for (int x : n[z]) {
                string t = c;
                swap(t[z], t[x]);

                if (v.find(t) == v.end()) {
                    q.push({t, m + 1});
                    v.insert(t);
                }
            }
        }

        return -1;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/sliding-puzzle/
 * Runtime: 8ms (46.59%)
 * https://leetcode.com/problems/sliding-puzzle/solutions/6080599/bfs-solution-from-scratch/
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    int slidingPuzzle(vector<vector<int>> &board) {

        int rowSize = 2;
        int colSize = 3;

        string compare = "";
        string target = "123450";

        // Making string of input matrix for comparison
        for (int i = 0; i < rowSize; i++) {
            for (int j = 0; j < colSize; j++) {
                compare += to_string(board[i][j]);
            }
        }

        queue<pair<string, int>> q; // String and number of count to reach this string
        q.push({compare, 0});       // No steps done for compare string

        unordered_set<string> visited; // Not visiting same string again and again
        visited.insert(compare);

        while (!q.empty()) {

            auto [curr_state, steps] = q.front();
            q.pop();

            if (curr_state == target) {
                return steps;
            }

            int zero_index = -1;

            for (int i = 0; i < curr_state.size(); i++) {
                if (curr_state[i] == '0') {
                    zero_index = i;
                    break;
                }
            }

            // Check if We have zero in matrix or not
            if (zero_index == -1) {
                break;
            }

            // 4- directional traversal

            // Up
            /*We can't go up for 0th row . So we cant go up for 0, 1, 2 indexes in our string */

            if (zero_index > 2) {

                string temp = curr_state;
                swap(temp[zero_index], temp[zero_index - 3]);

                if (visited.find(temp) == visited.end()) {
                    visited.insert(temp);
                    q.push({temp, steps + 1});
                }
            }

            // Down
            /* We can't go down for 1st row. So, we can't go down for 3, 4, 5 indexes */

            if (zero_index < 3) {
                string temp = curr_state;
                swap(temp[zero_index], temp[zero_index + 3]);

                if (visited.find(temp) == visited.end()) {
                    visited.insert(temp);
                    q.push({temp, steps + 1});
                }
            }

            // Left
            /* We can't go left for 1st column elements. So, we can't go left for 0, 3 indexes */

            if (zero_index != 0 && zero_index != 3) {
                string temp = curr_state;
                swap(temp[zero_index], temp[zero_index - 1]);

                if (visited.find(temp) == visited.end()) {
                    visited.insert(temp);
                    q.push({temp, steps + 1});
                }
            }

            // Right
            /* We can't go right for last column elements. So, we can't go right for 2, 5 indexes */

            if (zero_index != 2 && zero_index != 5) {
                string temp = curr_state;
                swap(temp[zero_index], temp[zero_index + 1]);

                if (visited.find(temp) == visited.end()) {
                    visited.insert(temp);
                    q.push({temp, steps + 1});
                }
            }
        }

        return -1;
    }
};