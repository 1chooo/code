#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, i; // n輸入用 i方便用
  while (cin >> n)
  {
    int num[n] = {0}, count[n] = {0}; // 建立輸入用陣列 ,記錄用字串
    int jolly = 1;                    // 最後判斷是不是jolly
    for (i = 0; i < n; i++)           // 輸入兼運算
    {
      cin >> num[i]; // 輸入數列

      if (i > 0) // i要大於0才可以運算
      {
        int temp = abs(num[i] - num[i - 1]); // 計算兩兩相鄰的數的差的絕對值
        if (temp < n)                        // temp必須要小於n不然就不是jolly
        {
          count[temp]++;                    // 計算這個差出現幾次
          if (count[temp] > 1 || temp == 0) // 這個差為0或者出現超過一次
          {                                 // 就不是jolly
            jolly = 0;
          }
        }
        else
        {
          jolly = 0;
        }
      }
    }

    if (jolly == 1) // 輸出
    {
      cout << "Jolly" << endl;
    }
    else
    {
      cout << "Not jolly" << endl;
    }
  }
}