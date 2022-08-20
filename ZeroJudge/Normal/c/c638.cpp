/*
 Problem link: https://zerojudge.tw/ShowProblem?problemid=c638
 Status: AC
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    string heavenlyStems[10] = {"甲", "乙", "丙", 
                                "丁", "戊", "己", 
                                "庚", "辛", "壬", "癸"};
    string earthlyBranches[12] = {"子", "丑", "寅", 
                                  "卯", "辰", "巳", 
                                  "午", "未", "申", 
                                  "酉", "戌", "亥"};
    int year;

    while (cin >> year) {
        int temp1 = 0;
        int temp2 = 0;
        year -= 4;
        temp1 = year % 10;
        temp2 = year % 12;

        cout << heavenlyStems[temp1] << earthlyBranches[temp2] << endl;
    }

    return 0;
}

// 1800 ~ 2018
// 1924 11