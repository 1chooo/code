/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 1022 - Digital Library
 * Required: frequency limit: 3.000 seconds
 * Link: https://vjudge.net/problem/UVA-1022
 * Status: AC
 */

#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

void printPath(map<string, string> &prev, string v) {
    const string &u = prev[v];
    if (u != v)
        printPath(prev, u);
    cout << v[0];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        map<string, vector<string>> adjList;
        for (int i = 0; i < m; ++i) {
            string u, v;
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        for (int i = 0; i < n; ++i) {
            string s, t;
            cin >> s >> t;
            // BFS
            queue<string> q;
            map<string, string> prev;
            prev[s] = s;
            q.push(s);
            while (!q.empty() && !prev.count(t)) {
                string u = q.front();
                q.pop();
                for (size_t j = 0; j < adjList[u].size(); ++j) {
                    const string &v = adjList[u][j];
                    if (!prev.count(v)) {
                        prev[v] = u;
                        q.push(v);
                    }
                }
            }
            printPath(prev, t);
            cout << endl;
        }
        if (T)
            cout << endl;
    }
    return 0;
}
