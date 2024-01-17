#include <iostream>
#include <vector>

using namespace std;

int main() {
  int up, down;
  while (cin >> up >> down) {
    if (up == 1) {
      cout << "[0;" << down << "]\n";
      continue;
    }

    vector<int> results;
    while (true) {
      if (down % up == 0) {
        results.push_back(down / up);
        break;
      }
      int ans = down / up;
      results.push_back(ans);
      int remainder = up;
      up = down - ans * up;
      down = remainder;
    }

    cout << "[" << results[0] << ";";
    for (int i = 1; i < results.size(); i++) {
      cout << results[i];
      if (i != results.size() - 1) {
        cout << ",";
      }
    }
    cout << "]\n";
  }

  return 0;
}
