#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {

  long long int i, j, temp, n;
  long long int operation, maxOperation;

  while (cin >> i >> j) {

    bool change = false;

    if (i > j) {
      temp = i;
      i = j;
      j = temp;
      change = true;
    }

    maxOperation = 0;

    for (int a = i; a <= j; a++) {
      n = i;
      operation = 1;

      while (1) {
        if (n == 1)
          break;
        else if (n % 2 == 1)
          n = 3 * n + 1;
        else
          n /= 2;
        operation++;
      }

      if (operation > maxOperation)
        maxOperation = operation;
    }

    if (change == true) 
      cout << j << " " << i << " " << maxOperation << endl;
    else 
      cout << i << " " << j << " " << maxOperation << endl;
  }
  
  return 0;
}