#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int T, N, P, num;
  vector<bool> days;

  cin >> T;
  while (T--)
  {
    cin >> N >> P;
    days.assign(N + 1, false);

    while (P--)
    {
      cin >> num;
      for (int i = num; i <= N; i += num)
        days[i] = true;
    }

    for (int i = 6; i <= N; i += 7)
      days[i] = days[i + 1] = false;

    int cnt = 0;
    for (int i = 1; i <= N; ++i)
      if (days[i])
        ++cnt;
    cout << cnt << "\n";
  }

  return 0;
}