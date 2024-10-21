#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int i;
    bool flag;
    int temp;

    while (cin >> n) {

        vector<int> v;
        vector<int> d;

        for (i = 0; i < n; i++) {
            cin >> temp;
            v.emplace_back(temp);
        }

        for (i = 0; i < n - 1; i++) {
            d.emplace_back(abs(v[i] - v[i + 1]));
        }

        sort(d.begin(), d.end());

        flag = false;

        for (i = 0; i < n - 1; i++) {
            if (d[i] != i + 1) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "Not jolly\n";
        } else {
            cout << "Jolly\n";
        }
    }

    return 0;
}