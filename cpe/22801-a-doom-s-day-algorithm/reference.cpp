// 作者： PingHe @
// 文章連結： https: // www.pinghenotes.com/UVa-12019-Doom-s-Day-Algorithm/
// 版權聲明： 本網誌所有文章除特別聲明外，均採用(CC) BY - NC - SA 許可協議。轉載請註明出處！

#include <iostream>
using namespace std;
int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N, M, D;
  cin >> N;
  while (N--)
  {
    cin >> M >> D;
    int day = D;
    for (int i = 1; i < M; ++i)
      day += days[i];
    day %= 7;
    if (day == 0)
      cout << "Friday\n";
    else if (day == 1)
      cout << "Saturday\n";
    else if (day == 2)
      cout << "Sunday\n";
    else if (day == 3)
      cout << "Monday\n";
    else if (day == 4)
      cout << "Tuesday\n";
    else if (day == 5)
      cout << "Wednesday\n";
    else if (day == 6)
      cout << "Thursday\n";
  }
  return 0;
}


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