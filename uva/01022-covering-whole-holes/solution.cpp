/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3463
 * Status: AC
 */

#include <iostream>
#include <map>
#include <queue>
#include <string>

using namespace std;

void printPath(const map<string, string> &prev, const string &v);

int main(void) {
    int times;
    cin >> times;

    while (times--) {
        int m;
        int n;
        cin >> m >> n;

        map<string, vector<string>> adjList;

        for (int i = 0; i < m; ++i) {
            string u;
            string v;
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        for (int i = 0; i < n; ++i) {
            string s;
            string t;
            cin >> s >> t;
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
            printf("\n");
        }

        if (times)
            printf("\n");
    }

    return 0;
}

void printPath(const map<string, string> &prev, const string &v) {
    const string &u = prev.at(v);
    if (u != v)
        printPath(prev, u);
    cout << v[0];
}
