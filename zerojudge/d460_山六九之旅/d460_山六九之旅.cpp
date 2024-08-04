/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=d460
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    int age;

    cin >> age;

    if (age >= 0 && age <= 5) {
        cout << 0 << endl;
    } else if (age >= 6 && age <= 11) {
        cout << 590 << endl;
    } else if (age >= 12 && age <= 17) {
        cout << 790 << endl;
    } else if (age >= 18 && age <= 59) {
        cout << 890 << endl;
    } else {
        cout << 399 << endl;
    }

    /*
     Another method, build table.
     long long int tab[8] = {0, 6, 12, 18, 60, 2147483648};
	 int price[8] = {0, 590, 790, 890, 399};	
    */

    return 0;
}