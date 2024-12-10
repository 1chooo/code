/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a414
 * Status: AC
 */

#include <stdio.h>

int main(void) {
    int n;
    while (scanf("%d", &n) && n) {
        int count = 0;
        for (; (n >> count) & 1; count++)
            ;
        printf("%d\n", count);
    }
}
