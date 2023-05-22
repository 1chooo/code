#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
  map<string, int> c;
  int n;
  cin >> n;
  string str;
  getline(cin, str);
  for (int i = 0; i < n; i++)
  {
    string tem = "";
    getline(cin, str);
    for (auto iter = str.begin(); iter != str.end(); iter++)
    {
      if (*iter == ' ')
        break;
      tem += *iter;
    }
    c[tem]++;
  }
  for (auto i = c.begin(); i != c.end(); i++)
    cout << i->first << " " << i->second << "\n";
  return 0;
}