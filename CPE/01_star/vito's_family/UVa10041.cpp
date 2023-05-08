/*
 * Author: @1chooo
 * Title: 10041 - Vito's Family
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 */

#include <iostream>
#include <cstdlib>

using namespace std;


int main(void)
{

  int cases;
  int i, j;
  int streetNumbers[30000] = {0};

  cin >> cases;

  for (i = 0; i < cases; i++)
  {
    int relatives; // 0 < r < 500.

    cin >> relatives;
    for (j = 0; j < relatives; j++)
    {
      cin >> streetNumbers[j];
    }
    for (j = 0; j < relatives; j++)
    {
      cout << streetNumbers[j];
    }
  }
}
