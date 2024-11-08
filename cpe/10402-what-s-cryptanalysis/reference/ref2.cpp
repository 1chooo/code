#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  scanf("%d", &n); // 輸入第一個數字代表有幾行字串
  char temp;
  char an[26] = {0};
  int i, idx, max = 0, count = -1;
  while (count < n)
  {                   // 如果換行計數等於輸入的n則結束迴圈
    temp = getchar(); // 將讀入的字元處理判斷並將適當的字元+1
    if (temp == '\n') // 如果讀到換行則
      count++;        // 計數+1
    else
    {
      // 將字母轉換成陣列索引
      if (temp <= 'z' && temp >= 'a')
        idx = temp - 'a';
      else if (temp <= 'Z' && temp >= 'A')
        idx = temp - 'A';
      else
        continue;
      // 針對指定索引進行計數
      an[idx] += 1;
      if (an[idx] > max)
        max = an[idx];
    }
  }
  /*顯示*/
  for (idx = max; idx > 0; idx--)
    for (i = 0; i < 26; i++)
    {
      if (an[i] == idx)
        printf("%c %d\n", ('A' + i), an[i]);
    }
  return 0;
}