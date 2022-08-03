/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=b294
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int num;
    int sum = 0;
    int price = 1;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int temp;
        
        cin >> temp;
        sum += price * temp;
        price++;
    }

    cout << sum << endl;

    return 0;
}