#include <iostream>
using namespace std;
int main()
{
  string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 30};
  int n = 0;
  cin >> n;
  while (n--)
  {
    int m = 0, d = 0;
    cin >> m >> d;
    int res_day = 4; // 因為2010年最後一天為星期5對應至day陣列的index則是4
    // 加上前面月份的天數
    for (int i = 1; i < m; i++)
    {
      res_day += daysOfMonth[i - 1];
    }
    res_day = (res_day + d) % 7; // 加上該月份天數也就是d並mod7得出正確的day index
    cout << day[res_day] << endl;
  }
}