/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 22801 - Doom's Day Algorithm
 * Required: frequency limit: 1.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3170
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int cases;
    const string weekday[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday",
        "Sunday"};
    const int daysOfNonLeapYear[12] = {
        31, 28, 31,
        30, 31, 30,
        31, 31, 30,
        31, 30, 31};

    cin >> cases;

    while (cases--) {
        int month;
        int day;
        cin >> month >> day;

        int dayCount = 4;

        for (int i = 0; i < month - 1; i++)
            dayCount += daysOfNonLeapYear[i];

        dayCount = (dayCount + day) % 7;
        cout << weekday[dayCount] << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main(void) {
    const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const string day[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int n;

    while (cin >> n) {
        for (int cs = 0; cs < n; cs++) {
            int m;
            int d;

            cin >> m >> d;

            int s = 0;
            for (int i = 1; i < m; i++)
                s += days[i];
            s += d;
            cout << day[s % 7] << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    const string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    const int mondays[12] = {10, 21, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12};

    cin >> n;

    for (int i = 0; i < n; i++) {
        int month;
        int day;
        cin >> month >> day;

        month--; // to fit the index of array

        int weekDay = (day - mondays[month] + 35) % 7;

        cout << week[weekDay] << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(void) {
    const string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    const int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 30};
    int n = 0;

    cin >> n;

    while (n--) {
        int m = 0;
        int d = 0;

        cin >> m >> d;

        int res_day = 4;
        for (int i = 1; i < m; i++) {
            res_day += daysOfMonth[i - 1];
        }
        res_day = (res_day + d) % 7;
        cout << day[res_day] << endl;
    }

    return 0;
}
