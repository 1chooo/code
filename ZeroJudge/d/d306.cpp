/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d306
 Status: 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int GCD(int, int);

int main(void) {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s1, s2;
        int n1 = 0, n2 = 0;

        cin >> s1 >> s2;
        for (int j = 0; j < s1.size(); j++){
            n1 *= 2;
            n1 += s1[j] - '0';
            // cout << s1[j] << " " << n1 << endl;
        }
        for (int j = 0; j < s2.size(); j++){
            n2 *= 2;
            n2 += s2[j] - '0';
        }

        printf("Pair #%d: ", i);
        if (GCD(n1, n2) > 1) 
            cout << "All you need is love!\n";
        else 
            cout << "Love is not all you need!\n";
    }
    return 0;
}

int GCD(int n1, int n2) {
    while ((n1 %= n2) && (n2 %= n1));

    return n1 + n2;
}