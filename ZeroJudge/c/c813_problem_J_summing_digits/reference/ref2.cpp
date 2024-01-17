#include <iostream>

using namespace std;
int f(int n)
{
  int all = 0;
  while (n > 0)
  {
    all += (n % 10);
    n /= 10;
  }
  return all;
}
int main()
{
  int n;
  while (cin >> n && n != 0)
  {
    while (n > 9)
    {
      n = f(n);
    }
    cout << n << endl;
  }
}