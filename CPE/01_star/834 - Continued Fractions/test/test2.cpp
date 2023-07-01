#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(void) {
  int numerator, denominator;
  int quotient;
  int temp;
  int tempDenominator;
  vector<int> fractionDigits;

  while (cin >> numerator >> denominator) {
    if (numerator == 1)
      cout << "[0;" << denominator << "]\n";
    else {
      fractionDigits.clear(); // 清空分數位數向量
      unordered_map<int, int> remainderMap; // 保存餘數和對應的索引

      while (true) {
        if (remainderMap.count(numerator) > 0) {
          // 遇到相同的餘數，找到循環節的開始位置
          int cycleStart = remainderMap[numerator];
          cout << "[";
          for (int i = cycleStart; i < fractionDigits.size(); i++) {
            cout << fractionDigits[i];
            if (i != fractionDigits.size() - 1) {
              cout << ",";
            }
          }
          cout << "]\n";
          break;
        }

        if (numerator == 1) {
          fractionDigits.push_back(denominator);
          cout << "[" << fractionDigits[0] << ";";
          for (int i = 1; i < fractionDigits.size() - 1; i++) {
            cout << fractionDigits[i] << ",";
          }
          cout << fractionDigits.back() << "]\n";
          break;
        }
        if (denominator % numerator == 0) {
          fractionDigits.push_back(denominator / numerator);
          cout << "[";
          for (int i = 0; i < fractionDigits.size() - 1; i++) {
            cout << fractionDigits[i] << ",";
          }
          cout << fractionDigits.back() << "]\n";
          break;
        }
        quotient = numerator / denominator;
        fractionDigits.push_back(quotient);
        remainderMap[numerator] = fractionDigits.size() - 1;
        numerator = numerator - quotient * denominator;
        temp = numerator;
        numerator = denominator;
        denominator = temp;
      }
    }
  }

  return 0;
}
