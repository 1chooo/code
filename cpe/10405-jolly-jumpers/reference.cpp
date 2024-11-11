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

#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n, a[3000], c[3000], k;
    bool jolly;
    while (cin >> n) {
        jolly = true;
        cin >> a[0];
        for (int i = 0; i < n; i++)
            c[i] = 0;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (((a[i] - a[i - 1]) >= n) || () || ((a[i - 1] - a[i]) >= n)) {
                jolly = false; // a[i]與a[i-1]的差大於n或 a[i]與a[i-1]相等，就不是jolly
            }
            if ((a[i] - a[i - 1]) >= 0)
                k = a[i] - a[i - 1];
            else
                k = a[i - 1] - a[i];
            if (c[k] == _____) { // k曾經出現過就不是 jolly
                jolly = false;
            }
            if (c[k] == 0) { // k沒出現過，設為已出現
                c[k] = 1;
            }
        }
        if (jolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    // system("pause");
}

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

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, tmp;

    while (cin >> n) {
        if (n == 1) {
            cin >> tmp;
            cout << "Jolly" << endl;
        } else {
            int seq[n];
            int check[n]; // check if 1~n-1 appeared

            for (int i = 0; i < n; i++) { // initially
                check[i] = 0;
            }

            for (int i = 0; i < n; i++) {
                cin >> seq[i];

                if (i != 0) {
                    tmp = abs(seq[i - 1] - seq[i]);
                    check[tmp] = 1;
                }
            }

            for (int i = 1; i < n; i++) {
                if (check[i] == 0) {
                    cout << "Not jolly" << endl;
                    break;
                }
                if (i == n - 1) {
                    cout << "Jolly" << endl;
                }
            }
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, A[3001], i;
    while (scanf("%d", &n) == 1) {
        for (i = 0; i < n; i++)
            scanf("%d", &A[i]);
        int mark[3001] = {0}, flag = 0;
        for (i = 1; i < n; i++) {
            if (abs(A[i] - A[i - 1]) < n)
                mark[abs(A[i] - A[i - 1])]++;
        }
        for (i = 1; i < n; i++)
            if (mark[i] == 0)
                flag = 1;
        if (flag)
            puts("Not jolly");
        else
            puts("Jolly");
    }
    return 0;
}

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, i; // n輸入用 i方便用
    while (cin >> n) {
        int num[n] = {0}, count[n] = {0}; // 建立輸入用陣列 ,記錄用字串
        int jolly = 1;                    // 最後判斷是不是jolly
        for (i = 0; i < n; i++)           // 輸入兼運算
        {
            cin >> num[i]; // 輸入數列

            if (i > 0) // i要大於0才可以運算
            {
                int temp = abs(num[i] - num[i - 1]); // 計算兩兩相鄰的數的差的絕對值
                if (temp < n)                        // temp必須要小於n不然就不是jolly
                {
                    count[temp]++;                    // 計算這個差出現幾次
                    if (count[temp] > 1 || temp == 0) // 這個差為0或者出現超過一次
                    {                                 // 就不是jolly
                        jolly = 0;
                    }
                } else {
                    jolly = 0;
                }
            }
        }

        if (jolly == 1) // 輸出
        {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }
}