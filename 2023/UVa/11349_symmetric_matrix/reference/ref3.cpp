#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t, n, i, c;
  string is1;
  cin >> c; // 輸入測資數量

  for (t = 1; t <= c; t++)
  {
    cin >> is1 >> is1 >> n; // 輸入矩陣數量
                            // 前面有N=所以用string輸入完就是數字了
    long long mat[n * n] = {}; // 使用一維陣列就可以了

    for (i = 0; i < n * n; i++) // 輸入矩陣數字
    {
      cin >> mat[i];
    }

    for (i = 0; i < n * n; i++)                         // 因為會以中間為對稱點
    {                                                   // 所以從最外圍兩個數字開始往中間比對
      if (mat[i] != mat[(n * n - 1) - i] || mat[i] < 0) // 若數字小於0或是數字不一樣就中斷
      {
        break;
      }
    }

    if (i == n * n) // 如果迴圈沒有被中斷就是對稱矩陣
    {
      cout << "Test #" << t << ": Symmetric." << endl;
    }
    else
    {
      cout << "Test #" << t << ": Non-symmetric." << endl;
    }
  }
  return 0;
}