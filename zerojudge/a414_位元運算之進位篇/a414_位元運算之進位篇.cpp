/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a414
 Status: AC
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n;

    while (scanf("%d", &n) && n) {
        int count = 0;

        while (n % 2) {
            count++;
            n /= 2;
        }
        printf("%d\n", count);
    }

    return 0;
}