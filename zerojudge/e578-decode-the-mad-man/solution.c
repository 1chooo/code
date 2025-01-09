/*
 * Author: @1chooo
 * Title: 10222 - Decode the Mad man
 * Required: frequency limit: 3.000 seconds
 * Link: https://zerojudge.tw/ShowProblem?problemid=e578
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
            if (index >= 2)
                printf("%c", table[index - 2]);
        }
    }

    printf("\n");

    return 0;
}
