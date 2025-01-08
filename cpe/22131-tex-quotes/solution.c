/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 22131 - TEX Quotes
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
 * Status: AC
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];
    int count = 0;

    while (fgets(sentence, sizeof(sentence), stdin)) {
        int length = strlen(sentence);

        for (int i = 0; i < length; i++) {
            if (sentence[i] == '\"') {
                count++;

                if (count % 2 == 1)
                    printf("``");
                else
                    printf("''");
            } else {
                printf("%c", sentence[i]);
            }
        }
    }

    return 0;
}
