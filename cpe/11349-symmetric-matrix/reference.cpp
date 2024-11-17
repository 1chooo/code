#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    char ch;
    cin >> T;
    for (int Case = 1; Case <= T; Case++) {
        cin >> ch >> ch >> n;
        long long a[n][n];
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                if (a[i][j] < 0)
                    flag = false;
            }
        }
        cout << "Test #" << Case << ": ";
        if (!flag) {
            cout << "Non-symmetric.\n";
            continue;
        }

        for (int i = 0; i <= n / 2; i++) {
            for (int j = 0; j < n - i; j++) {
                if (a[i][j] != a[n - 1 - i][n - 1 - j]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "Symmetric.\n";
        else
            cout << "Non-symmetric.\n";
    }
    return 0;
}

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int t; // size of test cases
    int n; // the dimension of square matrix

    cin >> t;
    for (int a = 0; a < t; a++) {
        cin.ignore();
        scanf("N = %d", &n);

        long long int matrix[n * n];
        int check_neg = 1; // if matrix negative
        int check_sym = 1; // if matrix symmetric

        for (int i = 0; i < n * n; i++) {
            cin >> matrix[i];
            if (matrix[i] < 0) {
                check_neg = 0;
            }
        }

        if (check_neg != 0) {
            for (int i = 0; i < n * n / 2; i++) {
                if (matrix[i] != matrix[n * n - i - 1]) {
                    check_sym = 0;
                    break;
                }
            }
        }

        if (check_sym && check_neg) {
            cout << "Test #" << a + 1 << ": Symmetric." << endl;
        } else {
            cout << "Test #" << a + 1 << ": Non-symmetric." << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n, i, c;
    string is1;
    cin >> c; // 輸入測資數量

    for (t = 1; t <= c; t++) {
        cin >> is1 >> is1 >> n;    // 輸入矩陣數量
                                   // 前面有N=所以用string輸入完就是數字了
        long long mat[n * n] = {}; // 使用一維陣列就可以了

        for (i = 0; i < n * n; i++) // 輸入矩陣數字
        {
            cin >> mat[i];
        }

        for (i = 0; i < n * n; i++)                           // 因為會以中間為對稱點
        {                                                     // 所以從最外圍兩個數字開始往中間比對
            if (mat[i] != mat[(n * n - 1) - i] || mat[i] < 0) // 若數字小於0或是數字不一樣就中斷
            {
                break;
            }
        }

        if (i == n * n) // 如果迴圈沒有被中斷就是對稱矩陣
        {
            cout << "Test #" << t << ": Symmetric." << endl;
        } else {
            cout << "Test #" << t << ": Non-symmetric." << endl;
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int t, n, Case = 0;
    long long map[101][101];
    char str[3];
    scanf("%d", &t);
    while (t--) {
        scanf("%s %s %d", str, str, &n);
        int flag = 0, i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf("%lld", &map[i][j]);
                if (map[i][j] < 0)
                    flag = 1;
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - i; j++) {
                if (map[i][j] != map[n - 1 - i][n - 1 - j]) {
                    flag = 1;
                    goto end;
                }
            }
        }
    end:
        printf("Test #%d: ", ++Case);
        if (flag)
            puts("Non-symmetric.");
        else
            puts("Symmetric.");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    char c;
    int x, kase = 1;
    long long a[105][105];
    cin >> n;
    while (n--) {
        cin >> c >> c >> x;
        int ty = 1;
        memset(a, 0, sizeof a);
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= x; j++) {
                cin >> a[i][j];
                if (a[i][j] < 0) {
                    ty = 0;
                }
            }
        }
        if (ty == 1) {
            for (int i = 1; i <= x; i++) {
                for (int j = 1; j <= x; j++) {
                    if (a[i][j] != a[x + 1 - i][x + 1 - j]) {
                        ty = 0;
                        break;
                    }
                }
            }
        }
        if (ty) {
            cout << "Test #" << kase++ << ": Symmetric." << endl;
        } else {
            cout << "Test #" << kase++ << ": Non-symmetric." << endl;
        }
    }
}

#include <bits/stdc++.h>
#include <iostream>
#define LOCAL
#define ll long long

using namespace std;
ll llnNum[12100];

int main() {
#ifdef LOCAL
    freopen("in1.txt", "r", stdin);
#endif // LOCAL
    int intCase, n, t, intLen;
    string strNon;
    cin >> intCase;

    // debug
    // cout << intCase << '\n' ;

    for (int t = 1; t <= intCase; t++) {
        cin >> strNon >> strNon >> n;

        // debug
        // cout << n << '\n' ;

        intLen = n * n;
        for (int i = 0; i < intLen; i++)
            cin >> llnNum[i];
        int isFlag = 1;
        for (int i = 0; i < intLen / 2 + 1; i++) {

            // debug
            // cout << intNum[i] << ' ' << intNum[intLen-i-1] << '\n' ;

            if (llnNum[i] != llnNum[intLen - i - 1] || llnNum[i] < 0 || llnNum[intLen - i - 1] < 0) {
                isFlag = 0;
                break;
            }
        }
        // debug
        // cout << isFlag << '\n' ;

        if (isFlag)
            cout << "Test #" << t << ": Symmetric." << '\n';
        else
            cout << "Test #" << t << ": Non-symmetric." << '\n';
    }

    return 0;
}
