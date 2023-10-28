/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=f043
 Status: 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main (void) {
    long long int r = 0, a = 0, temp = 0, temp2 = 0;

    cin >> r >> a;

    if (r == a) {
        a -= 3;
    }

    temp = r - a;

    if (a > temp) {
        temp2 = a;
        a = temp;
        temp = temp2;
    }

    printf("%lld+%lld=%lld\n", a, temp, r);

    return 0;
}