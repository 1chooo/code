/*
 * Author: @1chooo
 * Title: 11730 - Number Transformation
 * Required: frequency limit: 1.000 seconds
 * Link:
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int prime[1001];
int bfs(int s, int t) {
    int count[1001] = {};
    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int p_idx = 0; prime[p_idx] < now; p_idx++) {
            if (!(now % prime[p_idx])) {
                int temp = now + prime[p_idx];
                if (count[temp])
                    continue;

                if (temp == t) {
                    return count[now] + 1;
                } else if (temp < t) {
                    count[temp] = count[now] + 1;
                    q.push(temp);
                } else
                    break;
            }
        }
    }

    return -1;
}

int main() {
    int mark[1001];
    int tim = 0, s, t;
    bool notPrime[1001] = {true, true};
    int i, j;
    int cp;
    int _case;

    for (i = 2; i <= 32; i++)
        for (j = i + i; j < 1001; j += i)
            notPrime[j] = true;
    
    cp = 0;
    for (i = 2; i < 1001; i++)
        if (!notPrime[i])
            prime[cp++] = i;
    
    _case = 0;
    while (cin >> s >> t && s && t) {
        cout << "Case " << ++_case << ": ";
        if (s == t)
            cout << "0" << endl;
        else
            cout << bfs(s, t) << endl;
    }

    return 0;
}
