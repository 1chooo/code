#include <stdio.h>

int main() {
    int t;
    long long int n;

    while (scanf("%lld", &n) == 1) {
        if (n == 0)
            break;

        t = 0;
        while (1) {

            while (n != 0) {
                t = t + (n % 10);
                n = n / 10;
            }
            if (t / 10 == 0)
                break;
            else {
                n = t;
                t = 0;
            }
        }

        printf("%d\n", t);
    }

    return 0;
}
