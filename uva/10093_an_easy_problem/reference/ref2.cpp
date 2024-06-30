#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string str;
  int index, tmp, base;
  long long int sum;

  while (getline(cin, str))
  {
    sum = 0;
    base = 1;
    index = 0;

    while (!isalnum(str[index]))
    {
      index++;
    }

    for (int i = index; i < str.length(); i++)
    {
      if (isdigit(str[i]))
      {
        tmp = str[i] - '0';
      }
      else if (isupper(str[i]))
      {
        tmp = str[i] - 'A' + 10;
      }
      else if (islower(str[i]))
      {
        tmp = str[i] - 'a' + 36;
      }

      sum += tmp;
      if (base < tmp)
      {
        base = tmp;
      }
    }

    for (; base < 62; base++)
    {
      if (sum % base == 0)
      {
        cout << base + 1 << endl;
        break;
      }
    }
    if (base == 62)
    {
      cout << "such number is impossible!" << endl;
    }
  }
  return 0;
}