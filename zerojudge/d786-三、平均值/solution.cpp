/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d786
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num = 0;
        int temp = 0;
        double ans = 0;

        cin >> num;

        for (int j = 0; j < num; j++) {
            cin >> temp;
            ans += temp;
        }

        printf("%.2f\n", ans / num);
    }

    return 0;
}
