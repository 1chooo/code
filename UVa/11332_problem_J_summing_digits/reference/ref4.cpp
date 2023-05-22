#include <iostream>
using namespace std;
int f(int a)
{
  int sum = 0;
  while (a != 0)
  {
    sum += a % 10;
    a /= 10;
  }
  return sum;
}
int main()
{
  int x;
  while (cin >> x)
  {
    if (x == 0)
    {
      break;
    }
    while (f(x) >= 10)
    {
      x = f(x);
    }
    cout << f(x) << endl;
  }

  return 0;
}