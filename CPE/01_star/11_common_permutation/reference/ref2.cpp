#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;
int main()
{
  int ch1[26], ch2[26], ch[26];
  string s1, s2;
  while (getline(cin, s1))
  {
    getline(cin, s2);
    memset(ch1, 0, sizeof(ch1));
    memset(ch2, 0, sizeof(ch2));
    memset(ch, 0, sizeof(ch));
    for (int i = 0; i < s1.length(); i++)
    { // 統計第一個字串的字母出現頻率
      ch1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    { // 統計第二個字串的字母出現頻率
      ch2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
      if (ch1[i] < ch2[i])
        ch[i] = ch1[i]; // 取第一個與第二個字串的字母出現頻率較小的
      else
        ch[i] = ch2[i];
      if (ch[i] > 0)
      { // 輸出結果
        for (int j = 0; j < ch[i]; j++)
        {
          cout << char('a' + i);
        }
      }
    }
    cout << endl;
  }
}