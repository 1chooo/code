/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=b969
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <sstream>

#define INT_MAX 2147483647

using namespace std;

int main(void) {
    string names;
    string greetings;
    string name;

    getline(cin, names);
    getline(cin, greetings);

    stringstream splitNames(names);

    while (splitNames >> name) {
        cout << greetings << ", " << name << endl;
    }

    return 0;
}
