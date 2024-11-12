/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/most-beautiful-item-for-each-query/
 * Runtime: 46ms (84.43%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> maximumBeauty(
        vector<vector<int>> &items, vector<int> &queries) {
        int queriesSize = queries.size();
        vector<pair<int, int>> sortedQueries;
        vector<int> results(queriesSize);
        int itemIndex = 0;
        int currentMaxBeauty = 0;

        for (int i = 0; i < queriesSize; i++) {
            sortedQueries.push_back({queries[i], i});
        }
        sort(sortedQueries.begin(), sortedQueries.end());
        sort(items.begin(), items.end());

        for (int i = 1; i < items.size(); i++) {
            items[i][1] = max(items[i - 1][1], items[i][1]);
        }

        for (int i = 0; i < queriesSize; i++) {
            while (itemIndex < items.size() &&
                   items[itemIndex][0] <= sortedQueries[i].first) {
                currentMaxBeauty = max(currentMaxBeauty, items[itemIndex][1]);
                itemIndex++;
            }
            results[sortedQueries[i].second] = currentMaxBeauty;
        }

        return results;
    }
};

/**
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem: https://leetcode.com/problems/most-beautiful-item-for-each-query/
 * Runtime: 50ms (73.77%)
 */

const static auto _ = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return nullptr;
}();

class Solution {
  public:
    vector<int> maximumBeauty(vector<vector<int>> &items, vector<int> &queries) {
        sort(items.begin(), items.end());
        vector<pair<int, int>> queryIndex;
        int n = queries.size();

        for (int i = 0; i < n; i++) {
            queryIndex.push_back({queries[i], i});
        }
        
        sort(queryIndex.begin(), queryIndex.end());

        vector<int> ans(n, 0);
        int maxBeauty = 0;
        int i = 0;
        int m = items.size();
        for (auto &[query, index] : queryIndex) {
            while (i < m && items[i][0] <= query) {
                maxBeauty = max(maxBeauty, items[i][1]);
                i++;
            }
            ans[index] = maxBeauty;
        }
        return ans;
    }
};
