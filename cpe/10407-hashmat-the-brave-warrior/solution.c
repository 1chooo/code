/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 10407 - Hashmat the brave warrior
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    long long hashmat;
    long long opponent;

    while (scanf("%lld %lld", &hashmat, &opponent) == 2) {
        long long difference = abs(hashmat - opponent);
        printf("%lld\n", difference);
    }

    return 0;
}
