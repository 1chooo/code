#include <bits/stdc++.h>
using namespace std;
const size_t MAXN(200);
int arr[MAXN][MAXN]; // init 0

int solv(int n)
{
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= n; ++j)
      arr[i][j] += arr[i][j - 1]; // prefix
  }
  int ans = -1e9;
  for (int i = 1; i <= n; ++i)
  {
    for (int j = i; j <= n; ++j)
    {
      int r = 0, t = 0;
      for (int k = 1; k <= n; ++k)
      {
        t = arr[k][j] - arr[k][i - 1];
        // cout<<i<<' '<<j<<' '<<t<<endl;
        r = (t + r > 0) ? r + t : 0;
        ans = max(ans, r);
      }
    }
  }
  return ans;
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while (cin >> n)
  {
    for (int i = 1; i <= n; ++i)
    {
      for (int j = 1; j <= n; ++j)
      {
        cin >> arr[i][j];
      }
    }
    cout << solv(n) << '\n';
  }
  return 0;
}