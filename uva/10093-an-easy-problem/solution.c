/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1034
 * Status: AC
 */

#include <stdio.h>

int main(void) {
    char lines[100];

    while (fgets(lines, sizeof(lines), stdin) != NULL) {

        int sum = 0;
        int max = 1;
        int tmp;
        int i = 0;

        for (i = 0; lines[i] != '\0'; i++) {
            if (lines[i] >= '0' && lines[i] <= '9')
                tmp = lines[i] - '0';
            else if (lines[i] >= 'A' && lines[i] <= 'Z')
                tmp = lines[i] - 'A' + 10;
            else if (lines[i] >= 'a' && lines[i] <= 'z')
                tmp = lines[i] - 'a' + (10 + 26);
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
