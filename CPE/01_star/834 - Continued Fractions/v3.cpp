/*
 * Author: @1chooo
 * Title: 834 - Continued Fractions
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=775
 * Status: AC
 */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

  int up, down;
  int ans;
  int tmp;
  int tmpDown;
  vector<int> results;

  while (cin >> up >> down) {

    if (up == 1)
      cout << "[0;" << down << "]\n";

    else {
      results.clear();

      while (up > 0) {
      
        if (up == 1) {
          results.push_back(down);
          break;
        }
        if (down % up == 0) {
          results.push_back(down / up);
          break;
        }
        ans = up / down;

        results.push_back(ans);
        up = up - ans * down;

        swap(up, down);
      }

      for (int i = 0; i < results.size() - 1; i++) {
        if (i == 0)
          cout << "[" << results[i] << ";";
        else if (i == results.size() - 2)
          cout << results[i] << "]\n";
        else
          cout << results[i] << ",";
      }
    }
  
  }
  return 0;
}