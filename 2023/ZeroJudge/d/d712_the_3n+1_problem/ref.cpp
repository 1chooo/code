#include <cstdio>

int main()
{
  int a, b, temp;
  while (scanf("%d%d", &a, &b) != -1)
  {
    bool change = false;
    if (a > b)
    {
      temp = a;
      a = b;
      b = temp;
      change = true;
    }
    int max = 0;
    for (int i = a; i <= b; i++)
    {
      int n = i, len = 1;
      while (1)
      {
        if (n == 1)
          break;
        else if ((n & 1) == 0)
          (n >>= 1);
        else
          n = n * 3 + 1;
        len++;
      }
      if (len > max)
        max = len;
    }
    if (change)
    {
      temp = a;
      a = b;
      b = temp;
    }

    printf("%d %d %d\n", a, b, max);
  }
}