#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, len = 0, count[100] = {0};
  cin >> n;
  char c;
  cin.ignore();
  while (n--)
  {
    string line;
    getline(cin, line);
    for (int i = 0; i < line.length(); i++)
    {
      if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
      {
        len++;
        count[toupper(line[i])]++;
      }
    }
  }
  for (int j = len; j >= 1; j--)
  {
    for (char i = 'A'; i <= 'Z'; i++)
    {
      if (count[i] == j)
      {
        cout << i << " " << count[i] << endl;
      }
    }
  }
}