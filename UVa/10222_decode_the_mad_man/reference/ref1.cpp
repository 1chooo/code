#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
  string input;
  int index = 0;

  getline(cin, input);
  transform(input.begin(), input.end(), input.begin(), ::tolower);

  for (int i = 0; i < input.length(); i++)
  {
    if (input[i] == ' ')
    {
      cout << " ";
      continue;
    }
    index = keyboard.find(input[i]) - 2;
    cout << keyboard[index];
  }
  cout << endl;
  return 0;
}