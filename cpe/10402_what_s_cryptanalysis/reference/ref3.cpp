#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
  int n, temp;
  int letter[26] = {0};
  int maxIndex;
  char maxLetter;
  string str = " ";
  string tmpStr;

  cin >> n;
  tmpStr = "\n";

  for (int i = 0; i <= n; i++)
  {
    getline(cin, tmpStr);
    transform(tmpStr.begin(), tmpStr.end(), tmpStr.begin(), ::tolower); // transfer upper letter to lower
    str += tmpStr;
  }

  sort(str.begin(), str.end());

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] < 97 || str[i] > 122)
    { // str[i][j] is not letter(a~z)
      continue;
    }
    temp = (int)str[i] - 97;
    letter[temp]++;
  }

  for (int i = 0; i < 26; i++)
  {
    maxIndex = max_element(letter, letter + 26) - letter;
    maxLetter = 'A' + maxIndex;
    if (letter[maxIndex] == 0)
    {
      break;
    }
    cout << maxLetter << " " << letter[maxIndex] << endl;
    letter[maxIndex] = 0;
  }

  return 0;
}