/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1348
 * Status: AC
 */

#include <cstdio>
#include <iostream>

using namespace std;

int abs(int x);

int gcd(int a, int b);

int main(void) {
    int num[1005];

    while (scanf("%d", &num[0]) && num[0]) {
        int n = 1;
        int ans = 0;

        while (scanf("%d", &num[n]) && num[n])
            ++n;

        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
                if (num[i] - num[j] != 0)
                    ans = gcd(abs(num[i] - num[j]), ans);

        printf("%d\n", ans);
    }

    return 0;
}

int abs(int x) {
    if (x == 0)
        return 0;
    if (x < 0)
        return -x;
    return x;
}

int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a < b)
        return gcd(b, a);
    return gcd(b, a % b);
}
