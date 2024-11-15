#include <iostream>
using namespace std;

int main() {
    int sum, mx, temp;
    string s;
    while (getline(cin, s)) {
        sum = 0;
        mx = 1;
        int i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                temp = s[i] - '0';
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                temp = s[i] - 'A' + 10;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                temp = s[i] - 'a' + 36;
            } else
                continue;

            if (mx < temp)
                mx = temp;
            sum += temp;
        }

        for (i = mx; i < 62; i++)
            if (!(sum % i)) {
                cout << i + 1 << "\n";
                break;
            }

        if (i == 62)
            cout << "such number is impossible!\n";
    }
    return 0;
}

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int index, tmp, base;
    long long int sum;

    while (getline(cin, str)) {
        sum = 0;
        base = 1;
        index = 0;

        while (!isalnum(str[index])) {
            index++;
        }

        for (int i = index; i < str.length(); i++) {
            if (isdigit(str[i])) {
                tmp = str[i] - '0';
            } else if (isupper(str[i])) {
                tmp = str[i] - 'A' + 10;
            } else if (islower(str[i])) {
                tmp = str[i] - 'a' + 36;
            }

            sum += tmp;
            if (base < tmp) {
                base = tmp;
            }
        }

        for (; base < 62; base++) {
            if (sum % base == 0) {
                cout << base + 1 << endl;
                break;
            }
        }
        if (base == 62) {
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char s[100005];
    int i, j;
    while (scanf("%s", s) == 1) {
        char *p = s;
        if (*p == '+')
            p++;
        else if (*p == '-')
            p++;
        int mn = 1, err = 0, len;
        len = strlen(p);
        for (i = 0; i < len; i++) {
            if (p[i] >= '0' && p[i] <= '9') {
                p[i] -= '0';
            } else if (p[i] >= 'A' && p[i] <= 'Z') {
                p[i] = p[i] - 'A' + 10;
            } else if (p[i] >= 'a' && p[i] <= 'z') {
                p[i] = p[i] - 'a' + 36;
            } else
                err = 1;
            if (p[i] > mn)
                mn = p[i];
        }
        mn++;
        for (i = mn; i <= 62; i++) {
            int tmp = 0, k = i - 1;
            for (j = 0; j < len; j++) {
                tmp = tmp * i + p[j];
                tmp %= k;
            }
            if (tmp == 0)
                break;
        }
        if (i == 63 || err == 1)
            puts("such number is impossible!");
        else
            printf("%d\n", i);
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string input;

    while (cin >> input) {
        int digitSum = 0;
        int ans = -1;
        int maxDigit = -1;

        for (int i = 0; i < input.length(); i++) {
            int thisDigit;

            if (input[i] >= 'A' && input[i] <= 'Z')
                thisDigit = input[i] - 'A' + 10;
            else if (input[i] >= 'a' && input[i] <= 'z')
                thisDigit = input[i] - 'a' + 36;
            else if (input[i] >= '0' && input[i] <= '9')
                thisDigit = input[i] - '0';
            else
                continue;
            if (thisDigit > maxDigit)
                maxDigit = thisDigit;
            digitSum += thisDigit;
        }
        if (!maxDigit)
            maxDigit = 1;
        for (int i = maxDigit; i <= 61; i++) {
            if (!(digitSum % i)) {
                ans = i + 1;
                break;
            }
        }
        if (ans == -1)
            cout << "such number is impossible!\n";
        else
            cout << ans << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string is1, dic = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int val[62], i, j;

    for (i = 0; i < 62; i++) // 產生對應值的陣列
    {
        val[i] = i;
    }

    while (getline(cin, is1)) // 輸入測資
    {
        int sum = 0, max = 0;              // sum每個位數總和，max最大的數的值
        for (i = 0; i < is1.length(); i++) // 找到測資的每個位數的值
        {
            for (j = 0; j < 62; j++) {
                if (is1[i] == dic[j]) {
                    sum = sum + val[j]; // 每個位數相加
                    if (val[j] > max)   // 找到值最大的數
                    {
                        max = val[j];
                    }
                    break;
                }
            }
        }

        for (i = max; i < 62; i++) // 找到可以整除sum的數
        {                          // 因為62進位，所以只要找到61就好

            if (sum == 0) // 只有0就當二進位
            {
                cout << "2" << endl;
                break;
            } else if (sum % i == 0) {
                cout << i + 1 << endl;
                break;
            }
        }

        if (i == 62) // 找不到可以整除sum的數
        {
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}

#include <cstdio>
#include <cstring>

inline int findBase(char *str, int &sum); // 找出數字每一位中最大的(待會的初始基底不可小於它)，並相加每一位數
int main() {
    char str[10001];

    while (gets(str)) {
        int sum;
        int max = findBase(str, sum), i;

        for (i = max; i < 62; i++)
            if (!(sum % i)) {
                printf("%d\n", i + 1);
                break;
            }

        if (i == 62)
            puts("such number is impossible!");
    }

    return 0;
}
int findBase(char *str, int &sum) {
    sum = 0;
    int i, max = 1, len = strlen(str), temp;
    for (i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            temp = str[i] - '0';
            if (max < temp)
                max = temp;
            sum += temp;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            temp = str[i] - 'A' + 10;
            if (max < temp)
                max = temp;
            sum += temp;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            temp = str[i] - 'a' + 36;
            if (max < temp)
                max = temp;
            sum += temp;
        }
    }

    return max;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
map<char, ll> pos;
string txt;

bool MOD(ll mod) {
    ll y = 0;
    for (ll i = 0; txt[i]; i++)
        y = (y * (mod + 1) + (pos[txt[i]] - 1)) % mod;
    if (y == 0)
        return true;
    return false;
}

int main() {
    pos['0'] = pos['+'] = pos['-'] = 1;
    for (ll i = 0; str[i]; i++)
        pos[str[i]] = i + 1;
    /// freopen("in.txt","r",stdin);
    /// freopen("out.txt","w",stdout);
    while (cin >> txt) {
        ll base = 2;
        for (ll i = 0; txt[i]; i++)
            base = max(base, pos[txt[i]]);
        bool flag = false;
        for (ll b = base; b <= 62; b++) {
            if (MOD(b - 1)) {
                flag = true;
                printf("%lld\n", b);
                break;
            }
        }
        if (!flag)
            printf("such number is impossible!\n");
    }
    return 0;
}

// Link : http://uva.onlinejudge.org/external/100/10093.html
// Runtime : 0.012s
// Tag : math

// @BEGIN_OF_SOURCE_CODE

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL unsigned long long
using namespace std;

char input[10000];
int len_input;

int getVal(char v) {
    if (v >= '0' && v <= '9')
        return v - '0';
    else if (v >= 'A' && v <= 'Z')
        return v - 'A' + 10;
    else
        return v - 'a' + 36;
}

int findBase() {
    char maxi = '1';

    for (int i = 0; i < len_input; i++)
        if (maxi < input[i])
            maxi = input[i];

    return getVal(maxi) + 1;
}

void fix_it() {
    len_input = strlen(input);

    if (isalnum(input[0]))
        return;

    int len = strlen(input);

    for (int i = 1; i <= len; i++)
        input[i - 1] = input[i];

    len_input = strlen(input);
}

int main() {
    while (scanf("%s", input) == 1) {

        fix_it();

        bool baseFound = false;

        int sum = 0;

        for (int i = 0; i < len_input; i++)
            sum += getVal(input[i]);

        for (int i = findBase(); i <= 62; i++) {
            if (sum % (i - 1) == 0) {
                printf("%d\n", i);
                baseFound = true;
                break;
            }
        }

        if (!baseFound)
            printf("such number is impossible!\n");
    }

    return 0;
}

// @END_OF_SOURCE_CODE