#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int main()
{
  string tmp;
  int sum;

  while (cin >> tmp)
  {
    if (tmp == "0")
    {
      break;
    }
    if (tmp.length() == 1)
    {
      cout << tmp << endl;
      continue;
    }

    while (tmp.length() > 1)
    {
      sum = 0;
      int num[10] = {0};
      for (int i = 0; i < tmp.length(); i++)
      {
        num[i] = (int)tmp[i] - '0';
        sum += num[i];
      }
      tmp = to_string(sum);
    }
    cout << sum << endl;
  }

  return 0;
}