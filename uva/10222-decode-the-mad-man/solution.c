/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=14&page=show_problem&problem=1163
 * Status: AC
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char message[1001];
    const char table[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; // Remove trailing newline if present

    for (int i = 0; i < strlen(message); i++) {
        if (message[i] == ' ')
            printf(" ");
        else {
            int index = -1;
            for (int j = 0; j < strlen(table); j++) {
                if (table[j] == message[i]) {
                    index = j;
                    break;
                }
            }
            if (index != -1 && index >= 2)
                printf("%c", table[index - 2]);
        }
    }

    printf("\n");

    return 0;
}
