/*
 * Author: @1chooo
 * Title: 10020 - Minimal coverage
 * Required: frequency limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?Itemid=8&option=com_onlinejudge&page=show_problem&problem=1047
 * Status: AC
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string input;
    int x[255] = {0}, y[255] = {0};
    int xlen, ylen, anslen;

    while (getline(cin, input)) {
        xlen = input.length();

        for (int i = 0; i < xlen; i++)
            x[i] = input[xlen - i - 1] - '0';

        getline(cin, input);
        ylen = input.length();

        for (int i = 0; i < ylen; i++)
            y[i] = input[ylen - i - 1] - '0';

        int answer[510] = {0};

        for (int i = 0; i < xlen; i++) {
            for (int j = 0; j < ylen; j++) {
                answer[i + j] += x[i] * y[j];
                answer[i + j + 1] += answer[i + j] / 10;
                answer[i + j] %= 10;
            }
        }

        anslen = xlen + ylen;
        while (anslen > 1 && !answer[anslen - 1])
            anslen--;

        for (int i = anslen - 1; i >= 0; i--)
            printf("%d", answer[i]);

        printf("\n");
    }

    return 0;
}
