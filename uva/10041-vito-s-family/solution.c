/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <math.h>
#include <stdio.h>

#define SWAP(x, y) \
    {              \
        int t;     \
        t = x;     \
        x = y;     \
        y = t;     \
    }

void quick_sort(int number[], int left, int right);

int main(void) {
    int r = 0;
    scanf("%d", &r);

    int ans[r];

    for (int i = 0; i < r; i++) {
        int num_home;
        scanf("%d", &num_home);

        int door_mbs[num_home];
        for (int i = 0; i < num_home; i++)
            scanf("%d", &door_mbs[i]);

        quick_sort(door_mbs, 0, num_home - 1);

        int a = 0;

        if (num_home % 2 == 0) {
            int cal = 0;

            for (int j = 0; j < num_home / 2; j++) {
                cal += (door_mbs[num_home / 2 - 1] - door_mbs[j]);
                cal += (door_mbs[num_home - j - 1] - door_mbs[num_home / 2 - 1]);
            }

            ans[a] = cal;

            a++;
        }

        else {
            int cal = 0;
            int k = ceil(num_home / 2);
            for (int j = 0; j < k; j++) {
                cal += (door_mbs[k] - door_mbs[j]);
                cal += (door_mbs[num_home - j - 1] - door_mbs[k]);
            }

            ans[a] = cal;

            a++;
        }
    }

    for (int i = 0; i < r; i++)
        printf("%d\n", ans[i]);

    return 0;
}

void quick_sort(int number[], int left, int right) {
    if (left < right) {
        int s = number[(left + right) / 2];
        int i = left - 1;
        int j = right + 1;

        while (1) {
            while (number[++i] < s)
                ;

            while (number[--j] > s)
                ;

            if (i >= j)
                break;

            SWAP(number[i], number[j]);
        }

        quick_sort(number, left, i - 1);
        quick_sort(number, j + 1, right);
    }
}
