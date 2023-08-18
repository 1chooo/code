/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=a044
 Status: AC
 https://www.zhihu.com/question/36889571
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int inNum;

    while (cin >> inNum) {
        cout << ((((inNum * inNum * inNum) + 5 * inNum) / 6) + 1) << endl;
    }

    return 0;
}