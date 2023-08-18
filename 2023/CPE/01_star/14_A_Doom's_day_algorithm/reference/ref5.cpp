#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  int month, day, weekDay;
  string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  // 2011 1/10, 2/21, 4/4, 5/9, 6/6, 7/11,
  // 8/8, 9/5, 10/10 , 11/7 and 12/12 are Mondays.
  // 3/1 is Tuesday
  int mondays[12] = {10, 21, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12};

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> month >> day;

    month--; // to fit the index of array

    weekDay = (day - mondays[month] + 35) % 7;

    cout << week[weekDay] << endl;
  }
  return 0;
}