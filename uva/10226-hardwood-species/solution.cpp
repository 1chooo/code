/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1167
 * Status: AC
 */

#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while (t--) {
        map<string, int> records;
        string tree;
        int n = 0;
        while (getline(cin, tree)) {
            if (tree.compare("") == 0)
                break;
            records[tree]++;
            n++;
        }
        for (map<string, int>::iterator i = records.begin(); i != records.end(); i++) {
            cout << fixed << setprecision(4);
            cout << i->first << " " << i->second * 100.0 / n << endl;
        }
        if (t)
            puts("");
    }

    return 0;
}
