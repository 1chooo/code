#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  string num;
  while (getline(cin, num))
  {
    if (num == "0")
      break;
    int a = 0, b = 0;
    for (int i = 0; i < num.length(); i++)
    {
      int n = num[i] - '0';
      if (i % 2 == 0)
        a += n;
      else
        b += n;
    }
    if ((a - b) % 11 == 0)
      cout << num << " is a multiple of 11." << endl;
    else
      cout << num << " is not a multiple of 11." << endl;
  }

  return 0;
}