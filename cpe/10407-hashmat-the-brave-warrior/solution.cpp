/*
 * Author: @1chooo<hugo970217@gmail.com>
 * Title: 10407 - Hashmat the brave warrior
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
 * Status: AC
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {

  long long int army1, army2;

  while(cin >> army1 >> army2)
    cout << abs(army1 - army2) << endl;
  
  return 0;
}