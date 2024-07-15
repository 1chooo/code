/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a058
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int n;
    int zero = 0;
    int one = 0;
    int two = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;

        cin >> temp;

        if (temp % 3 == 0) {
            zero++;
        } else if(temp % 3 == 1) {
            one++;
        } else {
            two++;
        }
    }

    // cout << zero << " " << one << " " << two << endl;
    printf("%d %d %d\n", zero, one, two);

    return 0;
}