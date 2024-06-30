#include <iostream>
#include <cstdio>
using namespace std;
void bangla(long long int n)
{
  if (n >= 10000000)
  {
    bangla(n / 10000000);
    cout << " kuti";
    n %= 10000000;
  }
  if (n >= 100000)
  {
    bangla(n / 100000);
    cout << " lakh";
    n %= 100000;
  }
  if (n >= 1000)
  {
    bangla(n / 1000);
    cout << " hajar";
    n %= 1000;
  }
  if (n >= 100)
  {
    bangla(n / 100);
    cout << " shata";
    n %= 100;
  }
  if (n)
    cout << " " << n;
}
int main()
{
  long long int num;
  int count = 1;
  while (cin >> num)
  {
    printf("%4d.", count);
    if (num == 0)
      cout << " 0";
    bangla(num);
    cout << endl;
    count++;
  }

  return 0;
}