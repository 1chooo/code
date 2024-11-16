#include <iostream>
using namespace std;

int cal(long long x) // 計算的函式
{
    int sum = 0;
    while (x) // 每個位數加總
    {
        sum = sum + x % 10; // sum與x最左邊的數相加
        x = x / 10;
    }

    if (sum >= 10) // 如果還是大於10要再加總一次
    {
        sum = cal(sum);
    }

    return sum;
}

int main() {
    long long in1;

    while (cin >> in1) {
        if (in1 == 0) // 輸入0結束
        {
            break;
        }

        cout << cal(in1) << endl; // 輸出結果
    }

    return 0;
}

#include <iostream>

using namespace std;
int f(int n) {
    int all = 0;
    while (n > 0) {
        all += (n % 10);
        n /= 10;
    }
    return all;
}
int main() {
    int n;
    while (cin >> n && n != 0) {
        while (n > 9) {
            n = f(n);
        }
        cout << n << endl;
    }
}

#include <iostream>
using namespace std;
int solve(int x) {
    int ret = 0;
    while (x) {
        ret += x % 10;
        x /= 10;
    }
    if (ret < 10)
        return ret;
    else
        solve(ret);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n && n) {
        cout << solve(n) << "\n";
    }
    return 0;
}

#include <iostream>
using namespace std;
int f(int a) {
    int sum = 0;
    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
int main() {
    int x;
    while (cin >> x) {
        if (x == 0) {
            break;
        }
        while (f(x) >= 10) {
            x = f(x);
        }
        cout << f(x) << endl;
    }

    return 0;
}

#include <iostream>
#include <numeric>
#include <string>
using namespace std;

int main() {
    string tmp;
    int sum;

    while (cin >> tmp) {
        if (tmp == "0") {
            break;
        }
        if (tmp.length() == 1) {
            cout << tmp << endl;
            continue;
        }

        while (tmp.length() > 1) {
            sum = 0;
            int num[10] = {0};
            for (int i = 0; i < tmp.length(); i++) {
                num[i] = (int)tmp[i] - '0';
                sum += num[i];
            }
            tmp = to_string(sum);
        }
        cout << sum << endl;
    }

    return 0;
}