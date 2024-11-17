#include <stdio.h>
int main()
{
  int t, n;

  scanf("%d\n", &t);           // 有幾筆資料
  for (int i = 1; i <= t; i++) // 看幾筆資料運行幾次，外加題目要的計算標題
  {
    scanf(" N = %d\n", &n); // 這裡很重要很重要N前面一定要有空格不然會錯

    long long a[n * n];

    for (int j = 0; j < n * n; j++) // 讀入資料
      scanf("%lld", &a[j]);

    int key = 1;

    int last = n * n - 1;

    for (int k = 0; k < n * n; k++) // 判斷
    {
      if (k >= last || key == 0)
        break;

      if (a[k] < 0 || (a[k] != a[last - k]))
        key = 0;
    }

    printf("Test #%d: %s.\n", i, key ? "Symmetric" : "Non-symmetric");
  }
}