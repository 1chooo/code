#include <iostream>
#include <string>
using namespace std;
int main()
{
  string cs1 = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
  // 建立比對用的字串，先按空白鍵，之後從鍵盤左邊按到右邊就對了。
  string is1;
  while (getline(cin, is1)) // 輸入
  {

    for (int i = 0; i < is1.length(); i++) // 開始一個一個比對
    {
      if (is1[i] >= 'A' && is1[i] <= 'Z') // 先大寫換成小寫
      {
        is1[i] = is1[i] + 32;
      }

      for (int t = 0; t < cs1.length(); t++) // 逐一比對cs1
      {
        if (is1[i] == cs1[0]) // 空白鍵不用轉換
        {
          cout << " ";
          break;
        }

        else if (is1[i] == cs1[t]) // 輸出左邊兩個鍵盤的字
        {
          cout << cs1[t - 2];
          break;
        }
      }
    }
    cout << endl; // 換行
  }
  return 0;
}