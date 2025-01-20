/*
 * Author: @1chooo
 * Title: 10191 Longest Nap
 * Required: Time limit: 3.000 seconds
 * Link:
 * Status: AC
 */

#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b);

int int_str(const string &s);

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string a;
        string b;
        cin >> a >> b;

        cout << "Pair #" << i << ": ";
        if (gcd(int_str(a), int_str(b)) != 1) {
            cout << "All you need is love!" << endl;
        } else {
            cout << "Love is not all you need!" << endl;
        }
    }

    return 0;
}

int int_str(const string &s) {
    int x = 0;
    int len = s.length();

    for (int i = 0; i < len; i++)
        x *= 2, x += s[i] - '0';

    return x;
}

int gcd(int a, int b) {
    while ((a %= b) && (b %= a))
        ;
    return a + b;
}
