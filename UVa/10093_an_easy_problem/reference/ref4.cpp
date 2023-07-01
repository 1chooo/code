#include <iostream>
using namespace std;

int main()
{
  string input;

  while (cin >> input)
  {
    int digitSum = 0;
    int ans = -1;
    int maxDigit = -1;

    for (int i = 0; i < input.length(); i++)
    {
      int thisDigit;

      if (input[i] >= 'A' && input[i] <= 'Z')
        thisDigit = input[i] - 'A' + 10;
      else if (input[i] >= 'a' && input[i] <= 'z')
        thisDigit = input[i] - 'a' + 36;
      else if (input[i] >= '0' && input[i] <= '9')
        thisDigit = input[i] - '0';
      else
        continue;
      if (thisDigit > maxDigit)
        maxDigit = thisDigit;
      digitSum += thisDigit;
    }
    if (!maxDigit)
      maxDigit = 1;
    for (int i = maxDigit; i <= 61; i++)
    {
      if (!(digitSum % i))
      {
        ans = i + 1;
        break;
      }
    }
    if (ans == -1)
      cout << "such number is impossible!\n";
    else
      cout << ans << endl;
  }

  return 0;
}