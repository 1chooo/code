#include <stdbool.h>
#include <stdio.h>

int main() {

    int n;
    int i, j;
    bool flag;
    int temp;

    while (scanf("%d", &n) != EOF) {

        int arr[3000] = {0};

        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int S[3000] = {0};

        for (i = 0; i < n - 1; i++) {
            S[i] = abs(arr[i] - arr[i + 1]);
        }

        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n - 1; j++) {
                if (S[i] > S[j]) {
                    temp = S[i];
                    S[i] = S[j];
                    S[j] = temp;
                }
            }
        }

        flag = false;

        for (i = 0; i < n - 1; i++) {
            if (S[i] != i + 1) {
                flag = true;
                break;
            }
        }

        if (flag) {
            printf("Not jolly\n");
        } else {
            printf("Jolly\n");
        }
    }

    return 0;
}