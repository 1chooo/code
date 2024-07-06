#include <bits/stdc++.h>

using namespace std;

int main()
{
  int kase;
  cin >> kase;
  string Day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  while (kase--)
  {
    int m, d;
    cin >> m >> d;
    int days = 0;
    for (int i = 0; i < m; i++)
      days += Month[i];
    int w = (days + d + 5) % 7;
    cout << Day[w] << endl;
  }
  return 0;
}