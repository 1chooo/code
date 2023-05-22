#include <iostream>
#include <string>
using namespace std;
int main()
{
  int num;
  string input;
  int time[26] = {0};

  cin >> num;
  cin.get();

  for (int i = 0; i < num; i++)
  {
    getline(cin, input);
    for (int j = 0; j < input.length(); j++)
    {
      if ((input[j] >= 65) && (input[j] <= 90))
      {
        time[input[j] - 65]++;
      }
      else if ((input[j] >= 97) && (input[j] <= 122))
      {
        time[input[j] - 97]++;
      }
    }
  }
  int maxindex = 0;
  for (int i = 0; i < 26; i++)
  {
    for (int i = 0; i < 26; i++)
    {
      if (time[maxindex] < time[i])
        maxindex = i;
    }
    if (time[maxindex] != 0)
    {
      printf("%c", 'A' + maxindex);
      cout << " " << time[maxindex] << endl;
      time[maxindex] = 0;
    }
  }
  cout << endl;
}