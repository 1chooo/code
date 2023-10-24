#include <iostream>
using namespace std;

int cal(long long x) // 計算的函式
{
  int sum = 0;
  while (x) // 每個位數加總
  {
    sum = sum + x % 10; // sum與x最左邊的數相加
    x = x / 10;
  }

  if (sum >= 10) // 如果還是大於10要再加總一次
  {
    sum = cal(sum);
  }

  return sum;
}

int main()
{
  long long in1;

  while (cin >> in1)
  {
    if (in1 == 0) // 輸入0結束
    {
      break;
    }

    cout << cal(in1) << endl; // 輸出結果
  }

  return 0;
}