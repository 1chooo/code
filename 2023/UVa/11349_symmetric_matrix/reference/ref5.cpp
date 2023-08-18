#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  char c;
  int x, kase = 1;
  long long a[105][105];
  cin >> n;
  while (n--)
  {
    cin >> c >> c >> x;
    int ty = 1;
    memset(a, 0, sizeof a);
    for (int i = 1; i <= x; i++)
    {
      for (int j = 1; j <= x; j++)
      {
        cin >> a[i][j];
        if (a[i][j] < 0)
        {
          ty = 0;
        }
      }
    }
    if (ty == 1)
    {
      for (int i = 1; i <= x; i++)
      {
        for (int j = 1; j <= x; j++)
        {
          if (a[i][j] != a[x + 1 - i][x + 1 - j])
          {
            ty = 0;
            break;
          }
        }
      }
    }
    if (ty)
    {
      cout << "Test #" << kase++ << ": Symmetric." << endl;
    }
    else
    {
      cout << "Test #" << kase++ << ": Non-symmetric." << endl;
    }
  }
}