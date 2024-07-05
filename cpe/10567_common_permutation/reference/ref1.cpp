#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string a, b;
  int countA, countB;

  char tmp;

  while (getline(cin, a) && getline(cin, b))
  {
    countA = 0;
    countB = 0;
    int letter[26] = {0};

    for (int i = 0; i < 26; i++)
    {
      countA = count(a.begin(), a.end(), 97 + i);
      countB = count(b.begin(), b.end(), 97 + i);

      letter[i] = min(countA, countB);

      if (letter[i] != 0)
      {
        for (int j = 0; j < letter[i]; j++)
        {
          tmp = 97 + i;
          cout << tmp;
        }
      }
    }
    cout << endl;
  }
  return 0;
}