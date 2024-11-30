/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/valid-arrangement-of-pairs/
 * Runtime: 221ms (99.05%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<vector<int>> validArrangement(vector<vector<int>> &pairs) {
        unordered_map<int, vector<int>> adjacencyList;
        unordered_map<int, int> inOutDegree;

        for (const auto &pair : pairs) {
            adjacencyList[pair[0]].push_back(pair[1]);
            inOutDegree[pair[0]]++;
            inOutDegree[pair[1]]--;
        }

        // Find starting node
        int startNode = pairs[0][0];
        for (const auto &[node, degree] : inOutDegree) {
            if (degree == 1) {
                startNode = node;
                break;
            }
        }

        vector<int> path;
        stack<int> nodeStack;
        nodeStack.push(startNode);

        while (!nodeStack.empty()) {
            auto &neighbors = adjacencyList[nodeStack.top()];
            if (neighbors.empty()) {
                path.push_back(nodeStack.top());
                nodeStack.pop();
            } else {
                int nextNode = neighbors.back();
                nodeStack.push(nextNode);
                neighbors.pop_back();
            }
        }

        vector<vector<int>> arrangement;
        int pathSize = path.size();
        arrangement.reserve(pathSize - 1);

        for (int i = pathSize - 1; i > 0; --i) {
            arrangement.push_back({path[i], path[i - 1]});
        }

        return arrangement;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/valid-arrangement-of-pairs/
 * Runtime: 1430ms (25.24%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  private:
    void dfs(vector<int> &path, unordered_map<int, stack<int>> &graph, int start) {
        auto &neighbors = graph[start];
        while (!neighbors.empty()) {
            int next = neighbors.top();
            neighbors.pop();
            dfs(path, graph, next);
        }
        path.push_back(start);
    }

  public:
    vector<vector<int>> validArrangement(vector<vector<int>> &pairs) {
        unordered_map<int, stack<int>> graph;
        unordered_map<int, int> inDegree, outDegree;

        for (const auto &pair : pairs) {
            int u = pair[0], v = pair[1];
            graph[u].push(v);
            outDegree[u]++;
            inDegree[v]++;
        }

        int start = pairs[0][0];
        for (const auto &[node, _] : graph) {
            if (outDegree[node] > inDegree[node]) {
                start = node;
                break;
            }
        }

        vector<int> path;
        dfs(path, graph, start);
        reverse(path.begin(), path.end());

        vector<vector<int>> result;
        for (size_t i = 0; i < path.size() - 1; ++i) {
            result.push_back({path[i], path[i + 1]});
        }

        return result;
    }
};
