/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid
 * Runtime: 135ms (95.22%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  private:
    vector<pair<int, int>> MOVES = {
        {0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  public:
    int minimumTime(vector<vector<int>> &grid) {
        if (grid[0][1] > 1 &&
            grid[1][0] > 1)
            return -1;

        int rows = grid.size();
        int cols = grid[0].size();

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>>
            minHeap;

        minHeap.push({0, {0, 0}}); // time, row(x), col(y)

        vector<vector<int>> seen(rows, vector<int>(cols, 0));
        seen[0][0] = 1;

        while (!minHeap.empty()) {
            auto curr = minHeap.top();
            int currTime = curr.first;
            int currRow = curr.second.first;
            int currCol = curr.second.second;

            minHeap.pop();

            if (currRow == rows - 1 && currCol == cols - 1)
                return currTime;

            for (auto move : MOVES) {
                int nextRow = move.first + currRow;
                int nextCol = move.second + currCol;

                if (nextRow >= 0 && nextCol >= 0 &&
                    nextRow < rows && nextCol < cols &&
                    !seen[nextRow][nextCol]) {

                    int waitTime = ((grid[nextRow][nextCol] - currTime) % 2 == 0) ? 1 : 0;
                    int nextTime = max(currTime + 1, grid[nextRow][nextCol] + waitTime);

                    minHeap.push({nextTime, {nextRow, nextCol}});
                    seen[nextRow][nextCol] = 1;
                }
            }
        }
        return -1;
    }
};
