#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>

#define ACCURACY 1e-7

using namespace std;

int main(void)
{
  int T, N, K;
  double P;

  while (scanf("%d", &T) != EOF)
  {
    for (int t = 0; t < T; ++t)
    {
      scanf("%d %lf %d", &N, &P, &K);

      // Calculate the probability
      double power = K - 1;
      double curr = pow(1 - P, power) * P;

      // Calculate until the accuracy less 1e-7
      double last = 0;
      while (curr - last > ACCURACY)
      {
        power += N;
        last = curr;
        curr += pow(1 - P, power) * P;
      }

      // Print the result
      printf("%.4f\n", curr);
    }
  }

  return 0;
}