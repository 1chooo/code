#include <iostream>
using namespace std;
int solve(int x)
{
  int ret = 0;
  while (x)
  {
    ret += x % 10;
    x /= 10;
  }
  if (ret < 10)
    return ret;
  else
    solve(ret);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  while (cin >> n && n)
  {
    cout << solve(n) << "\n";
  }
  return 0;
}