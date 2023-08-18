#include <iostream>
#include <string>
using namespace std;

int main()
{
  string tmp;
  int length;
  int count = 0;

  while (getline(cin, tmp))
  {
    length = tmp.length();

    for (int i = 0; i < length; i++)
    {
      if (tmp[i] == '\"')
      {
        count++;

        if (count % 2 == 1)
        { // left-double-quote
          cout << "``";
        }
        else
        {
          cout << "''"; // right-double-quote
        }
      }
      else
      {
        cout << tmp[i];
      }
    }
    cout << endl;
  }
  return 0;
}