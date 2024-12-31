/*
 * Author: @1chooo
 * Title: 10038 - Jolly Jumpers
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=979
 * Status: AC
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int sequence[3001];
    int check[3000];

    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++)
            scanf("%d", &sequence[i]);

        for (int i = 0; i < n - 1; i++)
            check[i] = abs(sequence[i] - sequence[i + 1]);

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                if (check[i] > check[j]) {
                    int temp = check[i];
                    check[i] = check[j];
                    check[j] = temp;
                }
            }
        }

        bool jolly = true;

        for (int i = 0; i < n - 1; i++) {
            if (check[i] != i + 1) {
                jolly = false;
                break;
            }
        }

        if (jolly)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}
