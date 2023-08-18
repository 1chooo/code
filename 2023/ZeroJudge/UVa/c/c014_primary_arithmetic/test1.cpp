#include <iostream>
#include <cstdlib>

class Solution
{
public:
  void primaryArithmetic()
  {
    unsigned long long int a, b;
    int digit_a, digit_b, carry, c;

    while (std::cin >> a >> b)
    {
      carry = 0;
      c = 0;

      if (a == 0 && b == 0)
      {
        break;
      }

      while (a > 0 || b > 0)
      {
        digit_a = a % 10;
        a = a / 10;
        digit_b = b % 10;
        b = b / 10;
        if (digit_a + digit_b + c >= 10)
        {
          carry++;
          c = 1;
        }
        else
        {
          c = 0;
        }
      }

      if (carry == 0)
      {
        std::cout << "No carry operation." << std::endl;
      }
      else if (carry > 1)
      {
        std::cout << carry << " carry operations." << std::endl;
      }
      else
      {
        std::cout << "1 carry operation." << std::endl;
      }
    }
  }
};

int main()
{
  Solution solution;
  solution.primaryArithmetic();
  return 0;
}
