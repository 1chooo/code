/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a013
*  Status:
*/

#include <iostream>
#include <map>

using namespace std;

int main () 
{
    map<int, string> rome = {{1, "I"},
                             {5, "V"},
                             {10, "X"},
                             {50, "L"},
                             {100, "C"},
                             {500, "D"},
                             {1000, "M"}};
    string romeMark[8] = {"I", "V", "X", "L", "C", "D", "M"};
    int romeNum[8] = {1, 5, 10, 50, 100, 500, 1000};
    
    while (true)
    {
        string inStr1, inStr2;
        cin >> inStr1;
        if (inStr1 == "#")
            break;
        cin >> inStr2;

        // cout << inStr1 << ", " << inStr2 << endl; 
    
    }
    return 0;
}

/*
 I	1
 V	5
 X	10
 L	50
 C	100
 D	500
 M	1,000
*/

