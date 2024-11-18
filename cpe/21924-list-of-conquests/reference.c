#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {

    int n;
    int i, j;
    int count, flag;
    char country[2001][76] = {0};
    char name[76] = {0};
    char temp[76] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", country[i]);
        gets(name);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(country[j], country[j + 1]) > 0) {
                strcpy(temp, country[j]);
                strcpy(country[j], country[j + 1]);
                strcpy(country[j + 1], temp);
            }
        }
    }

    flag = false;
    count = 0;
    i = 0;

    while (i < n) {
        if (!flag) {
            printf("%s ", country[i]);
            count++;
            flag = true;
        } else if (flag) {
            if (strcmp(country[i], country[i + 1]) == 0) {
                count++;
            } else {
                printf("%d\n", count);
                flag = false;
                count = 0;
            }
            i++;
        }
    }

    return 0;
}