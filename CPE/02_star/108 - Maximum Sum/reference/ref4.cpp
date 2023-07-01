/**
 * UVa 108 Maximum Sum
 * Author: chchwy
 * Last Modified: 2011.10.08
 * Tag: Dynamic Programming
 */
#include <cstdio>
#include <cstring>
#include <climits>

enum
{
  MAX_DIM = 100 + 1
};

int subMatrixSum(int sumTable[][MAX_DIM], int x1, int y1, int x2, int y2)
{
  int sum = sumTable[x2][y2] - sumTable[x1 - 1][y2] - sumTable[x2][y1 - 1] + sumTable[x1 - 1][y1 - 1];
  return sum;
}

int main()
{
  int dimension; // the dimension of matrix
  int sumTable[MAX_DIM][MAX_DIM];

  while (scanf("%d", &dimension) == 1)
  {
    memset(sumTable, 0, sizeof(sumTable));

    // Build Sum Table
    for (int i = 1; i <= dimension; ++i)
    {
      for (int j = 1; j <= dimension; ++j)
      {
        int value;
        scanf("%d", &value);
        sumTable[i][j] = sumTable[i - 1][j] + sumTable[i][j - 1] - sumTable[i - 1][j - 1] + value;
      }
    }

    int max_sum = INT_MIN;

    // position (x1,y1)
    for (int x1 = 1; x1 <= dimension; ++x1)
    {
      for (int y1 = 1; y1 <= dimension; ++y1)
      {
        // position (x2,y2)
        for (int x2 = x1; x2 <= dimension; ++x2)
        {
          for (int y2 = y1; y2 <= dimension; ++y2)
          {
            int sum = subMatrixSum(sumTable, x1, y1, x2, y2);
            if (sum > max_sum)
              max_sum = sum;
          }
        }
      }
    }
    printf("%d\n", max_sum);
  }
  return 0;
}