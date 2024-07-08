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

      while (true) {
      
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

        tmp = up;
        up = down;
        down = tmp;
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

這段程式出了問題，你可以幫我看出問題嗎？
/*******************************************************/
/* UVa 834 Continued Fractions                         */
/* Author: Maplewing [at] knightzone.studio            */
/* Version: 2015/12/02                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int numerator, denominator;
  while (scanf("%d%d", &numerator, &denominator) != EOF)
  {
    printf("[%d;", numerator / denominator);
    numerator -= numerator / denominator * denominator;

    bool isPrint = false;
    while (numerator > 0)
    {
      swap(numerator, denominator);
      if (isPrint)
      {
        printf(",");
      }
      printf("%d", numerator / denominator);
      isPrint = true;
      numerator -= numerator / denominator * denominator;
    }

    printf("]\n");
  }
  return 0;
}
這段是沒問題的！但邏輯好像沒差多少誒