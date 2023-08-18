#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
  string convertToTitle(int n) {

    string result = "";
    while (n) {
        if (n % 26 == 0) {
            result += 'Z';
            n -= 26;
        } else {
            result += n % 26 - 1 + 'A';
            n -= n % 26;
        }
        n /= 26;
    }
    reverse(result.begin(), result.end());
    return result;
  }
};


int main(void) {
  return 0;
}




