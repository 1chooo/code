/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=c638
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    const string heavenlyStems[10] = {
        "甲", "乙", "丙",
        "丁", "戊", "己",
        "庚", "辛", "壬", "癸"};
    const string earthlyBranches[12] = {
        "子", "丑", "寅",
        "卯", "辰", "巳",
        "午", "未", "申",
        "酉", "戌", "亥"};
    int year;

    while (cin >> year) {
        year -= 4;
        int temp1 = year % 10;
        int temp2 = year % 12;

        cout << heavenlyStems[temp1] << earthlyBranches[temp2] << endl;
    }

    return 0;
}
