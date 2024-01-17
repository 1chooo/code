#include <iostream>
using namespace std;
int main()
{
  int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string day[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
  int n, m, d, s;
  while (cin >> n)
  {
    for (int cs = 0; cs < n; cs++)
    {
      int s = 0;
      cin >> m >> d;
      for (int i = 1; i < m; i++)
        s += days[i];
      s += d;
      cout << day[s % 7] << endl;
    }
  }
}