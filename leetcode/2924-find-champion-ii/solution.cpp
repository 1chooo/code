/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/find-champion-ii/
 * Runtime: 0ms (100.00%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    static int findChampion(int n, vector<vector<int>> &edges) {
        vector<int> inDegree(n, 0);

        for (auto &edge : edges) {
            int weakerTeam = edge[1];
            inDegree[weakerTeam]++;
        }

        vector<int> zeroInDegreeNodes;
        for (int team = 0; team < n; team++) {
            if (inDegree[team] == 0)
                zeroInDegreeNodes.push_back(team);
        }

        if (zeroInDegreeNodes.size() != 1)
            return -1;
        else
            return zeroInDegreeNodes[0];
    }
};
