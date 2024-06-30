#include <bits/stdc++.h>
#define ll long long
using namespace std;
string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
map<char, ll> pos;
string txt;

bool MOD(ll mod)
{
  ll y = 0;
  for (ll i = 0; txt[i]; i++)
    y = (y * (mod + 1) + (pos[txt[i]] - 1)) % mod;
  if (y == 0)
    return true;
  return false;
}

int main()
{
  pos['0'] = pos['+'] = pos['-'] = 1;
  for (ll i = 0; str[i]; i++)
    pos[str[i]] = i + 1;
  /// freopen("in.txt","r",stdin);
  /// freopen("out.txt","w",stdout);
  while (cin >> txt)
  {
    ll base = 2;
    for (ll i = 0; txt[i]; i++)
      base = max(base, pos[txt[i]]);
    bool flag = false;
    for (ll b = base; b <= 62; b++)
    {
      if (MOD(b - 1))
      {
        flag = true;
        printf("%lld\n", b);
        break;
      }
    }
    if (!flag)
      printf("such number is impossible!\n");
  }
  return 0;
}
