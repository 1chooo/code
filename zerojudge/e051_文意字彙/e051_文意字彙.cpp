/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=e051
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    string str;

    cin >> str;
    
    cout << str[0];
    
    for (int i = 1; i < str.size() - 1; i++) {
        cout << "_";
    }
    cout << str[str.size() - 1] << "\n";

    return 0;
}