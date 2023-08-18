#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  int up, down;
  while (cin >> up >> down) {
    if (up == 1) {
      cout << "[0;" << down << "]\n";
      continue;
    }

    vector<int> results;
    unordered_map<int, int> remainderMap;
    int index = 0;

    cout << "[" << down / up << ";";

    while (true) {
      if (remainderMap.count(up) > 0) {
        int cycleStart = remainderMap[up];
        for (int i = 0; i < cycleStart; i++) {
          cout << results[i] << ",";
        }
        cout << "(";
        for (int i = cycleStart; i < results.size(); i++) {
          cout << results[i];
          if (i != results.size() - 1) {
            cout << ",";
          }
        }
        cout << ")]\n";
        break;
      }

      remainderMap[up] = index++;
      results.push_back(down / up);
      int remainder = up;
      up = down % up;
      down = remainder;
    }
  }

  return 0;
}
