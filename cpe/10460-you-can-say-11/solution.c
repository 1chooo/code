/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char num[1001];

    while (scanf("%1000s", num) == 1 && num[0] != '0') {
        int odd = 0;
        int even = 0;
        int len = strlen(num);

        for (int i = 0; i < len; i++) {
            if (i % 2 == 1)
                odd += num[i] - '0';
            else
                even += num[i] - '0';
        }

        int sum = odd - even;

        if (sum % 11 == 0)
            printf("%s is a multiple of 11.\n", num);
        else
            printf("%s is not a multiple of 11.\n", num);
    }

    return 0;
}
