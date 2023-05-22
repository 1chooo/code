#include <iostream>
using namespace std;
int doom[13] = {-1, 10, 21, 7, 4, 9, 6, 11, 8, 5, 10, 7, 12};
string date[] = {"Monday", "Tuesday", "Wednesday",
                 "Thursday", "Friday", "Saturday", "Sunday"};

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T, m, d;
  cin >> T;
  while (T--)
  {
    cin >> m >> d;
    int delta = (d - doom[m]) % 7;
    if (delta >= 0)
    {
      cout << date[delta] << "\n";
    }
    else
    {
      cout << date[7 + delta] << "\n";
    }
  }
  return 0;
}