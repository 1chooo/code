/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 21924 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {

    int lines = 0;
    map<string, int> countries;

    cin >> lines;

    while (lines--) {
        string tmp;
        cin >> tmp;
        
        countries[tmp]++;
        getline(cin, tmp);
    }

    for (map<string, int>::iterator i = countries.begin(); i != countries.end(); i++)
        cout << i->first << " " << i->second << endl;

    return 0;
}
