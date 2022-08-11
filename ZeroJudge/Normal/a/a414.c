#include <iostream>

using namespace std;

int main(void) {
    int n;
    while (scanf("%d", &n) && n) {
        int count = 0;
        for (; (n >> count) & 1; count++);
        printf("%d\n", count);
    }
}