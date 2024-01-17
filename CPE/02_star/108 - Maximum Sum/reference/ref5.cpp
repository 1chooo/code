/*
 * Sai Cheemalapati
 * UVA 108: Maximum sum
 *
 */

#include <algorithm>
#include <cstdio>

using namespace std;

int N;
int A[110][110];

int main()
{
  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      scanf("%d", &A[i][j]);
      if (i > 0)
        A[i][j] += A[i - 1][j];
      if (j > 0)
        A[i][j] += A[i][j - 1];
      if (i > 0 && j > 0)
        A[i][j] -= A[i - 1][j - 1];
    }
  }
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      for (int k = i; k < N; k++)
      {
        for (int l = j; l < N; l++)
        {
          int cur = A[k][l];
          if (i > 0)
            cur -= A[i - 1][l];
          if (j > 0)
            cur -= A[k][j - 1];
          if (i > 0 && j > 0)
            cur += A[i - 1][j - 1];
          ans = max(ans, cur);
        }
      }
    }
  }
  printf("%d\n", ans);
}