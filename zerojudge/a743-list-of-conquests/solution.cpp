/*
 * Author: @1chooo
 * Title: 10420 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://zerojudge.tw/ShowProblem?problemid=a743
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {

    int lines = 0;
    int i = 0;
    map<string, int> countries;
    string tmp;

    cin >> lines;

    while (lines--) {
        cin >> tmp;
        countries[tmp]++;
        getline(cin, tmp);
    }

    for (map<string, int>::iterator i = countries.begin(); i != countries.end(); i++)
        cout << i->first << " " << i->second << endl;
    return 0;
}
