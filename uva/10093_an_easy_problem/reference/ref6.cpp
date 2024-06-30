#include <cstdio>
#include <cstring>

inline int findBase(char *str, int &sum); // 找出數字每一位中最大的(待會的初始基底不可小於它)，並相加每一位數
int main()
{
  char str[10001];

  while (gets(str))
  {
    int sum;
    int max = findBase(str, sum), i;

    for (i = max; i < 62; i++)
      if (!(sum % i))
      {
        printf("%d\n", i + 1);
        break;
      }

    if (i == 62)
      puts("such number is impossible!");
  }

  return 0;
}
int findBase(char *str, int &sum)
{
  sum = 0;
  int i, max = 1, len = strlen(str), temp;
  for (i = 0; i < len; i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
    {
      temp = str[i] - '0';
      if (max < temp)
        max = temp;
      sum += temp;
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      temp = str[i] - 'A' + 10;
      if (max < temp)
        max = temp;
      sum += temp;
    }
    else if (str[i] >= 'a' && str[i] <= 'z')
    {
      temp = str[i] - 'a' + 36;
      if (max < temp)
        max = temp;
      sum += temp;
    }
  }

  return max;
}