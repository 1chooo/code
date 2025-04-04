/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1209
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(void) {
    int x;

    while (scanf("%d", &x) != EOF) {
        getchar();
        int temp = getchar();
        int sum = 0;
        int ans = 0;

        while (temp != '\n' && temp != EOF) {
            if (temp == '-' || temp >= '0' && temp <= '9') {
                ungetc(temp, stdin);
                int a;
                scanf("%d", &a);
                ans = ans * x + sum;
                sum = sum * x + a;
            }
            temp = getchar();
        }
        printf("%d\n", ans);
    }

    return 0;
}
