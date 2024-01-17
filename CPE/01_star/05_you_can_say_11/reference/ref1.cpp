#include <iostream>
#include <string>
using namespace std;

int main()
{
  string is1; // 數字會很大用字串來處理

  while (cin >> is1) // 輸入
  {
    if (is1 == "0") // 輸入0代表結束
    {
      break;
    }

    int odd = 0, even = 0; // odd計算奇數位數的加總
                           // even計算偶數位數的加總
    for (int i = 0; i < is1.length(); i++) // 計算奇數偶位數加總
    {
      if (i % 2 == 1) // 計算奇數位數加總
      {
        odd = odd + (is1[i] - '0'); // 字串某一個字來計算會用ASCII碼
                                    // 因為數字的ASCII碼相連
                                    // 所以減掉'0'的ASCII碼就是字串的數字了
      }
      else
      {
        even = even + (is1[i] - '0');
      }
    }

    if ((odd - even) % 11 == 0) // 奇偶位數整除11就是11的倍數
    {
      cout << is1 << " is a multiple of 11." << endl;
    }
    else
    {
      cout << is1 << " is not a multiple of 11." << endl;
    }
  }
  return 0;
}