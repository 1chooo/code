#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int up, down;
  int ans;
  int tmp;
  int tmpDown;
  vector<int> results;

  while (cin >> up >> down) {
    if (up == 1)
      cout << "[0;" << down << "]\n";
    else {
      results.clear(); // 清空結果向量

      while (true) {
        if (up == 1) {
          results.push_back(down);
          break;
        }
        if (down % up == 0) {
          results.push_back(down / up);
          break;
        }
        ans = up / down;
        results.push_back(ans);
        up = up - ans * down;
        tmp = up;
        up = down;
        down = tmp;
      }

      cout << "["; // 開始輸出
      for (int i = 0; i < results.size(); i++) {
        cout << results[i];
        if (i != results.size() - 1) {
          cout << ",";
        }
      }
      cout << "]\n"; // 結束輸出
    }
  }

  return 0;
}
