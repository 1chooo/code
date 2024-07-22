#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a, b;
  int cota[26], cotb[26];
  while (getline(cin, a))
  {
    getline(cin, b);
    if (a == " " || b == " ")
    {
      cout << "\n";
    }
    memset(cota, 0, sizeof cota);
    memset(cotb, 0, sizeof cotb);
    for (int i = 0; i < a.length(); i++)
    {
      cota[a[i] - 'a']++;
    }
    for (int i = 0; i < b.length(); i++)
    {
      cotb[b[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
      for (int j = min(cota[i], cotb[i]); j > 0; j--)
      {
        cout << (char)('a' + i);
      }
    }
    cout << "\n";
  }
}
