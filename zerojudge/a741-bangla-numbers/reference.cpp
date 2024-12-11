#include <iomanip>
#include <iostream>
using namespace std;

void cal(long long x) {
    if (x / 10000000 != 0) {
        cal(x / 10000000); // 處理不是最高位那組
                           // 或是輸出數字，下同
        cout << " kuti";   // 輸出單位
        x = x % 10000000;  // 去掉前面的數字，下同
    }

    if (x / 100000 != 0) {
        cal(x / 100000);
        cout << " lakh";
        x = x % 100000;
    }

    if (x / 1000 != 0) {
        cal(x / 1000);
        cout << " hajar";
        x = x % 1000;
    }

    if (x / 100 != 0) {
        cal(x / 100);
        cout << " shata";
        x = x % 100;
    }

    if (x != 0) {
        cout << " " << x; // 輸出數字
    }
}

int main() {
    long long num, count = 1;

    while (cin >> num) // 輸入數字
    {
        cout << setw(4) << count << "."; // 輸出標題數字
        cal(num);                        // 呼叫函式

        if (num == 0) // 若輸入為0
        {             // 則輸出0
            cout << " 0";
        }

        count = count + 1; // 計算次數
        cout << endl;      // 記得換行
    }
}

#include <bits/stdc++.h>

using namespace std;

void split(long long n) {
    if (n >= 10000000) {
        split(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        split(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        split(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        split(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n)
        cout << " " << n;
}

int main() {
    long long n;
    int kase = 1;
    while (cin >> n) {
        cout << setw(4) << kase++ << ".";
        if (n)
            split(n);
        else
            cout << " 0";
        cout << endl;
    }

    return 0;
}

#include <iostream>

#include <algorithm>

using namespace std;

int k[] = {10000000, 100000, 1000, 100};

string s[] = {"kuti", "lakh", "hajar", "shata"}, answer;

string str(long long int x)

{
    string s = "";

    while (x)

    {
        s += '0' + (x % 10);

        x /= 10;
    }

    reverse(s.begin(), s.end());

    return s;
}

void fix(long long int x)

{
    if (x >= k[0])

    {
        fix(x / k[0]);

        answer += " " + s[0];

        x %= (int)k[0];
    }

    for (int i = 0; i < 4; i++)

    {
        if (x / k[i] > 0)

        {
            answer += " " + str(x / k[i]) + " " + s[i];

            x %= k[i];
        }
    }

    if (x > 0)
        answer += " " + str(x);
}

int main()

{
    ios_base::sync_with_stdio(0);

    cin.tie(0);

    long long int N;

    int Case = 1;

    while (cin >> N)

    {
        cout << "   " << Case++ << ".";

        if (N == 0)
            cout << " 0" << endl;

        else

        {
            answer = "";

            fix(N);

            cout << answer << endl;
        }
    }

    return 0;
}

#include <cstdio>
#include <iostream>
using namespace std;
void bangla(long long int n) {
    if (n >= 10000000) {
        bangla(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        bangla(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        bangla(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        bangla(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n)
        cout << " " << n;
}
int main() {
    long long int num;
    int count = 1;
    while (cin >> num) {
        printf("%4d.", count);
        if (num == 0)
            cout << " 0";
        bangla(num);
        cout << endl;
        count++;
    }

    return 0;
}
