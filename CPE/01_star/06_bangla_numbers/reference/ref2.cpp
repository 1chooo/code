#include <bits/stdc++.h>

using namespace std;

void split(long long n)
{
  if (n >= 10000000)
  {
    split(n / 10000000);
    cout << " kuti";
    n %= 10000000;
  }
  if (n >= 100000)
  {
    split(n / 100000);
    cout << " lakh";
    n %= 100000;
  }
  if (n >= 1000)
  {
    split(n / 1000);
    cout << " hajar";
    n %= 1000;
  }
  if (n >= 100)
  {
    split(n / 100);
    cout << " shata";
    n %= 100;
  }
  if (n)
    cout << " " << n;
}

int main()
{
  long long n;
  int kase = 1;
  while (cin >> n)
  {
    cout << setw(4) << kase++ << ".";
    if (n)
      split(n);
    else
      cout << " 0";
    cout << endl;
  }

  return 0;
}