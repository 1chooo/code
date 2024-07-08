#include <iostream>
using namespace std;

int main()
{
  int sum, mx, temp;
  string s;
  while (getline(cin, s))
  {
    sum = 0;
    mx = 1;
    int i;
    for (i = 0; i < s.size(); i++)
    {
      if (s[i] >= '0' && s[i] <= '9')
      {
        temp = s[i] - '0';
      }
      else if (s[i] >= 'A' && s[i] <= 'Z')
      {
        temp = s[i] - 'A' + 10;
      }
      else if (s[i] >= 'a' && s[i] <= 'z')
      {
        temp = s[i] - 'a' + 36;
      }
      else
        continue;

      if (mx < temp)
        mx = temp;
      sum += temp;
    }

    for (i = mx; i < 62; i++)
      if (!(sum % i))
      {
        cout << i + 1 << "\n";
        break;
      }

    if (i == 62)
      cout << "such number is impossible!\n";
  }
  return 0;
}