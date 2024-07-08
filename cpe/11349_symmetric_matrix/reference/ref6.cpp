#include <iostream>
#include <bits/stdc++.h>
#define LOCAL
#define ll long long

using namespace std;
ll llnNum[12100];

int main()
{
#ifdef LOCAL
  freopen("in1.txt", "r", stdin);
#endif // LOCAL
  int intCase, n, t, intLen;
  string strNon;
  cin >> intCase;

  // debug
  // cout << intCase << '\n' ;

  for (int t = 1; t <= intCase; t++)
  {
    cin >> strNon >> strNon >> n;

    // debug
    // cout << n << '\n' ;

    intLen = n * n;
    for (int i = 0; i < intLen; i++)
      cin >> llnNum[i];
    int isFlag = 1;
    for (int i = 0; i < intLen / 2 + 1; i++)
    {

      // debug
      // cout << intNum[i] << ' ' << intNum[intLen-i-1] << '\n' ;

      if (llnNum[i] != llnNum[intLen - i - 1] || llnNum[i] < 0 || llnNum[intLen - i - 1] < 0)
      {
        isFlag = 0;
        break;
      }
    }
    // debug
    // cout << isFlag << '\n' ;

    if (isFlag)
      cout << "Test #" << t << ": Symmetric." << '\n';
    else
      cout << "Test #" << t << ": Non-symmetric." << '\n';
  }

  return 0;
}