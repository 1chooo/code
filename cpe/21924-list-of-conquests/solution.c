/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 21924 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

typedef struct {
    char *name;
    int count;
} Country;

int main(void) {
    int lines = 0;

    Country countries[MAX_LEN];

    scanf("%d", &lines);
    getchar();

    for (int i = 0; i < lines; i++) {
        char country[MAX_LEN];
        scanf("%s", country);
        getchar();

        int found = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(countries[j].name, country) == 0) {
                countries[j].count++;
                found = 1;
                break;
            }
        }

        if (!found) {
            countries[i].name = malloc(strlen(country) + 1);
            strcpy(countries[i].name, country);
            countries[i].count = 1;
        }

        char tmp[MAX_LEN];

        fgets(tmp, MAX_LEN, stdin);
    }

    for (int i = 0; i < lines; i++) {
        printf("%s %d\n", countries[i].name, countries[i].count);
        free(countries[i].name);
    }

    return 0;
}
