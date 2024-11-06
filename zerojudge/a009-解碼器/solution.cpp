/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a009
 * Status: AC
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++)
    {
      char n = x[i];
      n = n - 7;
      cout << n;
    }

    return 0;
}