#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int t; // size of test cases
  int n; // the dimension of square matrix

  cin >> t;
  for (int a = 0; a < t; a++)
  {
    cin.ignore();
    scanf("N = %d", &n);

    long long int matrix[n * n];
    int check_neg = 1; // if matrix negative
    int check_sym = 1; // if matrix symmetric

    for (int i = 0; i < n * n; i++)
    {
      cin >> matrix[i];
      if (matrix[i] < 0)
      {
        check_neg = 0;
      }
    }

    if (check_neg != 0)
    {
      for (int i = 0; i < n * n / 2; i++)
      {
        if (matrix[i] != matrix[n * n - i - 1])
        {
          check_sym = 0;
          break;
        }
      }
    }

    if (check_sym && check_neg)
    {
      cout << "Test #" << a + 1 << ": Symmetric." << endl;
    }
    else
    {
      cout << "Test #" << a + 1 << ": Non-symmetric." << endl;
    }
  }
  return 0;
}