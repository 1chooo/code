/*******************************************************/
/* UVa 834 Continued Fractions                         */
/* Author: Maplewing [at] knightzone.studio            */
/* Version: 2015/12/02                                 */
/*******************************************************/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int numerator, denominator;
  while (scanf("%d%d", &numerator, &denominator) != EOF)
  {
    printf("[%d;", numerator / denominator);
    numerator -= numerator / denominator * denominator;

    bool isPrint = false;
    while (numerator > 0)
    {
      swap(numerator, denominator);
      if (isPrint)
      {
        printf(",");
      }
      printf("%d", numerator / denominator);
      isPrint = true;
      numerator -= numerator / denominator * denominator;
    }

    printf("]\n");
  }
  return 0;
}