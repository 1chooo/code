#include <iostream>

using namespace std;

int main()
{
  int i, sum;
  char n[1001];
  while (cin >> n)
  {
    if (n[0] == '0')
      break;
    for (sum = i = 0; n[i] != '\0'; i++)
    {
      if (i % 2 == 1)
        sum = sum + (n[i] - '0');
      if (i % 2 == 0)
        sum = sum - (n[i] - '0');
    }
    if (sum % 11 == 0)
      cout << n << " is a multiple of 11." << endl;
    else
      cout << n << " is not a multiple of 11." << endl;
  }
  return 0;
}