#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int T, n;
  char ch;
  cin >> T;
  for (int Case = 1; Case <= T; Case++)
  {
    cin >> ch >> ch >> n;
    long long a[n][n];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
        if (a[i][j] < 0)
          flag = false;
      }
    }
    cout << "Test #" << Case << ": ";
    if (!flag)
    {
      cout << "Non-symmetric.\n";
      continue;
    }

    for (int i = 0; i <= n / 2; i++)
    {
      for (int j = 0; j < n - i; j++)
      {
        if (a[i][j] != a[n - 1 - i][n - 1 - j])
        {
          flag = false;
          break;
        }
      }
    }
    if (flag)
      cout << "Symmetric.\n";
    else
      cout << "Non-symmetric.\n";
  }
  return 0;
}