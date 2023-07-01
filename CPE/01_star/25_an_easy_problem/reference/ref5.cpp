#include <iostream>
#include <string>
using namespace std;

int main()
{
  string is1, dic = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  int val[62], i, j;

  for (i = 0; i < 62; i++) // 產生對應值的陣列
  {
    val[i] = i;
  }

  while (getline(cin, is1)) // 輸入測資
  {
    int sum = 0, max = 0;              // sum每個位數總和，max最大的數的值
    for (i = 0; i < is1.length(); i++) // 找到測資的每個位數的值
    {
      for (j = 0; j < 62; j++)
      {
        if (is1[i] == dic[j])
        {
          sum = sum + val[j]; // 每個位數相加
          if (val[j] > max)   // 找到值最大的數
          {
            max = val[j];
          }
          break;
        }
      }
    }

    for (i = max; i < 62; i++) // 找到可以整除sum的數
    {                          // 因為62進位，所以只要找到61就好

      if (sum == 0) // 只有0就當二進位
      {
        cout << "2" << endl;
        break;
      }
      else if (sum % i == 0)
      {
        cout << i + 1 << endl;
        break;
      }
    }

    if (i == 62) // 找不到可以整除sum的數
    {
      cout << "such number is impossible!" << endl;
    }
  }
  return 0;
}