/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d097
 * Status: AC
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    while (scanf("%d", &n) == 1) {
        int sequence[3001];
        for (int i = 0; i < n; i++)
            scanf("%d", &sequence[i]);

        int check[3000];
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
