/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=b969
 Status: AC
*/

#include <iostream>
#include <cstdlib>
#include <sstream>

#define INT_MAX 2147483647

using namespace std;

int main(void) {
    string names, greetings, name;
    
    getline(cin, names);
    getline(cin, greetings);

    stringstream splitNames(names);

    while (splitNames >> name){
        cout << greetings << ", " << name << endl;
    }
    
    return 0;
}