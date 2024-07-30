/*
 * Author: @1chooo
 * Title: 10056 - What is the Probability ?
 * Required: frequency limit: 3.000 seconds
 * Link: https://zerojudge.tw/ShowProblem?problemid=e510
 * Status: AC
 */

#include <stdio.h>
#include <math.h>

int main(void) {

  int set, num, serial;
  double prob, q;
  double result;
  
  scanf("%d", &set);

  while (set--) {
    scanf("%d %lf %d", &num, &prob, &serial);

    if (prob == 0)
      printf("0.0000\n");
    else {
      q = 1 - prob;
      result = pow(q, serial - 1) * prob / (1 - pow(q, num));
      printf("%.4lf\n", result);
    }
  }

  return 0;
}
