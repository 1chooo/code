#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string a, b; // 輸入用字串
  int i, t;    // 方便用

  while (getline(cin, a)) // 輸入資料
  {
    getline(cin, b); // 輸入資料

    string re[1000] = {""}; // 記錄用陣列

    for (i = 0; i < a.length(); i++) // 使用雙重迴圈比對
    {
      for (t = 0; t < b.length(); t++)
      {
        if (a[i] == b[t]) // 找到重複的字
        {
          re[i] = a[i];  // 紀錄
          b.erase(t, 1); // 擦掉該字避免重複找查
          break;         // 直接結束第二個迴圈， 理由同上
        }
      }
    }

    sort(re, re + 1000); // 排序

    for (i = 0; i < 1000; i++) // 輸出
    {
      cout << re[i];
    }

    cout << endl; // 記得換行
  }
  return 0;
}