/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 10093 - An Easy Problem!
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1034
 * Status: AC
 */

#include <stdio.h>

int main(void) {
    char r[100];
    int tmp;
    int sum;
    int max;

    while (fgets(r, sizeof(r), stdin) != NULL) {

        sum = 0;
        max = 1;
        int i;

        for (i = 0; r[i] != '\0'; i++) {
            if (r[i] >= '0' && r[i] <= '9')
                tmp = r[i] - '0';
            else if (r[i] >= 'A' && r[i] <= 'Z')
                tmp = r[i] - 'A' + 10;
            else if (r[i] >= 'a' && r[i] <= 'z')
                tmp = r[i] - 'a' + (10 + 26);
            else
                continue;

            if (max < tmp)
                max = tmp;

            sum += tmp;
        }

        for (i = max; i < 62; i++) {
            if (sum % i == 0) {
                printf("%d\n", i + 1);
                break;
            }
        }

        if (i == 62)
            printf("such number is impossible!\n");
    }

    return 0;
}
