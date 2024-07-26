/*
 * Author: @1chooo
 * Title: 10101 - Bangla Numbers
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=13&page=show_problem&problem=1042
 * Status: AC
 */

#include <stdio.h>

void bangla(unsigned long long int);

int main(void) {

    unsigned long long int num;
    int cases = 1;

    while (scanf("%llu", &num) == 1) {
        printf("%d.", cases);

        if (num == 0)
            printf(" 0");
        else
            bangla(num);

        printf("\n");
        cases++;
    }

    return 0;
}

void bangla(unsigned long long int num) {
    if (num >= 10000000) {
        bangla(num / 10000000);
        printf(" kuti");
        num %= 10000000;
    }

    if (num >= 100000) {
        bangla(num / 100000);
        printf(" lakh");
        num %= 100000;
    }

    if (num >= 1000) {
        bangla(num / 1000);
        printf(" hajar");
        num %= 1000;
    }

    if (num >= 100) {
        bangla(num / 100);
        printf(" shata");
        num %= 100;
    }

    if (num)
        printf(" %llu", num);
}
