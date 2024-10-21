/*
 * Author: @1chooo
 * Title: 10035 - Primary Arithmetic
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976
 * Status: AC
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  unsigned long long int num1, num2;
  int carry;
  int carryCount;


  while (cin >> num1 >> num2) {

    if (num1 == 0 && num2 == 0)
      break;

    carry = 0;
    carryCount = 0;

    while (num1 > 0 || num2 > 0) {

      if ((num1 % 10 + num2 % 10 + carry) >= 10) {
        carry = 1;
        carryCount++;
      } else {
        carry = 0;
      }
        num1 /= 10;
        num2 /= 10;
    }

    if (carryCount == 0)
      cout << "No carry operation." << endl;
    else if (carryCount > 1)
      cout << carryCount << " carry operations." << endl;
    else
      cout << "1 carry operation." << endl;
  }
  return 0;
}

/*
 * Author: @1chooo
 * Title: 10035 - Primary Arithmetic
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976
 * Status: AC
 */

#include <iostream>
#include <cstdlib>

class Solution {
 public:
  void privacyArithmetic() {
    unsigned long long int num1, num2;
    int carry, carryCount;

    while (std::cin >> num1 >> num2) {
      if (num1 == 0 && num2 == 0) break;

      carry = 0;
      carryCount = 0;

      while (num1 > 0 || num2 > 0) {
        if ((num1 % 10 + num2 % 10 + carry) >= 10) {
          carry = 1;
          carryCount++;
        } else {
          carry = 0;
        }
        num1 /= 10;
        num2 /= 10;
      }

      if (carryCount == 0)
        std::cout << "No carry operation." << std::endl;
      else if (carryCount > 1)
        std::cout << carryCount << " carry operations." << std::endl;
      else
        std::cout << "1 carry operation." << std::endl;
    }
  }
};

int main() {
  Solution s;
  s.privacyArithmetic();
  return 0;
}

/*
 * Author: @1chooo
 * Title: 10035 - Primary Arithmetic
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=976
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

class Solution {
  public:
    void primaryArithmetic() {
        unsigned long long int a, b;
        int digit_a, digit_b, carry, c;

        while (std::cin >> a >> b) {
            carry = 0;
            c = 0;

            if (a == 0 && b == 0) {
                break;
            }

            while (a > 0 || b > 0) {
                digit_a = a % 10;
                a = a / 10;
                digit_b = b % 10;
                b = b / 10;
                if (digit_a + digit_b + c >= 10) {
                    carry++;
                    c = 1;
                } else {
                    c = 0;
                }
            }

            if (carry == 0) {
                std::cout << "No carry operation." << std::endl;
            } else if (carry > 1) {
                std::cout << carry << " carry operations." << std::endl;
            } else {
                std::cout << "1 carry operation." << std::endl;
            }
        }
    }
};

int main() {
    Solution solution;
    solution.primaryArithmetic();
    return 0;
}
