#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <algorithm>

using namespace std;

bool cmp(const pair<char, int>& a, const pair<char, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 忽略第一行後面的換行符號

    string s;
    map<char, int> freq;

    while (n--) {
        getline(cin, s);
        for (char c : s) {
            if (isalpha(c)) { // 只考慮英文字母
                c = toupper(c); // 轉換為大寫
                freq[c]++;
            }
        }
    }

    // 將map轉為vector，以便進行排序
    vector<pair<char, int>> freqVec(freq.begin(), freq.end());

    // 以出現次數和字母順序排序
    sort(freqVec.begin(), freqVec.end(), cmp);

    // 輸出結果
    for (auto p : freqVec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
