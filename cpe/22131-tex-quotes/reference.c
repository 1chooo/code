#include <stdio.h>
int main() {
    char ch;
    int check = 1;
    while ((ch = getchar()) != EOF) {
        if (ch == '"') {
            if (check == 1) {
                printf("``");
                check = 2;
            } else {
                printf("''");
                check = 1;
            }
        } else
            putchar(ch);
    }
    return 0;
}

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {

    char str[999] = {0};
    bool flag = true;
    int i;

    while (gets(str)) {
        for (i = 0; i < strlen(str); i++) {
            if (flag && str[i] == '"') {
                printf("``");
                flag = false;
            } else if (!flag && str[i] == '"') {
                printf("''");
                flag = true;
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {

    char chr;
    bool flag = true;

    while ((chr = getchar()) != EOF) {
        if (flag && chr == '"') {
            printf("``");
            flag = false;
        } else if (!flag && chr == '"') {
            printf("''");
            flag = true;
        } else {
            printf("%c", chr);
        }
    }

    return 0;
}
