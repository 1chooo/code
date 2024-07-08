#include <stdio.h>
#include <math.h>
int c;
int euclid(int a, int b)
{
  if (b == 0)
    return 0;
  if (c == 1)
    printf(";");
  if (c > 1)
    printf(",");
  printf("%d", a / b);
  c++;
  return euclid(b, a % b);
}

int main()
{
  int n, d;
  while (scanf("%d%d", &n, &d) == 2)
  {
    c = 0;
    printf("[");
    euclid(n, d);
    printf("]\n");
  }
  return 0;
}
