#include <iostream>
#include <map>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s[] = {"~!@#$%^&*()_+",
                "`1234567890-=",
                "qwertyuiop[]\\",
                "asdfghjkl;'",
                "zxcvbnm,./"};

  map<char, char> mp;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 2; j < s[i].size(); j++)
    {
      mp[s[i][j]] = s[i][j - 2];
    }
  }
  string S;
  while (getline(cin, S))
  {
    for (int i = 0; i < S.size(); i++)
    {
      if (S[i] == ' ')
        cout << " ";
      else
        cout << mp[S[i]];
    }
    cout << "\n";
  }
  return 0;
}