#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
  int a, b;
  while (scanf("%d%d", &a, &b) != EOF)
  {                        // 43,19
    printf("[%d;", a / b); // [2;
    a %= b;                // 5,19
    while (a != 1)
    {
      printf("%d,", b / a); // [2;3, / [2;3,1,
      b %= a;               // 5,4 / 4,1
      swap(a, b);           // 4,5 / 1,4
    }
    printf("%d]\n", b); // [2;3,4,1]
  }
  return 0;
}