#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int s, n, i_th;
  double p; // probability of successful event
  double q, ans;

  cin >> s;
  for (int i = 0; i < s; i++)
  {
    cin >> n >> p >> i_th;

    if (p == 0)
    {
      ans = 0;
    }
    else
    {
      q = 1 - p;
      ans = pow(q, i_th - 1) * p / (1 - pow(q, n));
    }
    cout << fixed << setprecision(4) << ans << endl;
  }
  return 0;
}