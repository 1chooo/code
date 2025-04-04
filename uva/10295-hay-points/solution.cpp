/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=983
 * Status: AC
 */

#include <cstdio>
#include <cstring>
#include <iostream>

#define PRIME_MAX 40000

using namespace std;

void makePrime(int Prime[], int &cnt);
int sumDigit(int n);
int factorSumDigit(int Prime[], int PrimeCnt, int n);
int isPrime(int Prime[], int PrimeCnt, int n);

int main(void) {
    int *Prime = new int[PRIME_MAX];
    int PrimeCnt = 0;
    makePrime(Prime, PrimeCnt);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // answer is > n (by definition from problem).
        ++n;
        // n != prime && S(n) == FS(n) break!
        // linear search is enough.
        while (isPrime(Prime, PrimeCnt, n) ||
               sumDigit(n) != factorSumDigit(Prime, PrimeCnt, n))
            ++n;
        cout << n << endl;
    }

    return 0;
}

void makePrime(int Prime[], int &cnt) {
    int *table = new int[PRIME_MAX];
    int i;
    int j;
    int k;
    memset(table, 0, sizeof(table));
    for (i = 2; i < PRIME_MAX; ++i) {
        if (!table[i]) {
            Prime[cnt++] = i;
            for (j = 2; i * j < PRIME_MAX; ++j)
                table[i * j] = 1;
        }
    }
}

int sumDigit(int n) {
    int sum = 0;

    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int factorSumDigit(int Prime[], int PrimeCnt, int n) {
    int i;
    int k;
    int sum = 0;
    for (i = 0; i < PrimeCnt && Prime[i] < n; ++i) {
        if (!(n % Prime[i])) {
            // n = Prime[i]^k * n';
            for (k = 0; !(n % Prime[i]); ++k)
                n /= Prime[i];
            // so, sumDigit(Prime[i]) only need once.
            sum += (sumDigit(Prime[i]) * k);
        }
    }
    if (n != 1) // n is prime now.
        sum += sumDigit(n);

    return sum;
}

int isPrime(int Prime[], int PrimeCnt, int n) {
    int flag = 1;

    for (int i = 0; i < PrimeCnt && Prime[i] * Prime[i] <= n; ++i) {
        if (!(n % Prime[i])) {
            flag = 0;
            break;
        }
    }
    // 1 -> isPrime, 0 -> NotPrime.
    return flag;
}
