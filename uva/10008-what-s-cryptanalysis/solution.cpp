/*
 * Author: @1chooo
 * Title: 10008 - What's Cryptanalysis?
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=949
 * Status: AC
 */

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>

#define len 5000

using namespace std;

int main() {
    int n, length, i, j, t; // 宣告 n 當測資數量，length 計算實際長度
    char msg[len];          // 宣告一個長度很大的，用來存句子
    char alp[28] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num[28] = {}; // 計數用
    cin >> n;         // 輸入行數
    cin.ignore();     // 換行
    for (i = 0; i < n; i++) {
        cin.getline(msg, len); // 逐行取得內容
        length = strlen(msg);  // 計算句子長度
        for (j = 0; j < length; j++)
            if (isalpha(msg[j]))
                num[toupper(msg[j]) - 'A']++;
    } // 判斷是否為英文字母，並把是英文字母全轉成大寫，再把那個英文字母的計數增加
    /*
    int isalpha(int c);
    目的:檢查 c 是否為字母,
    回傳值:返回非零值，如果 c 是一個字母，否則為 0

    int toupper(int c);
    目的:將 c 轉換為大寫
    返回值:該函數等效返回大寫字母 C ，如果存在這樣的值，否則 c 保持不變。
    */
    for (i = 0; i < 26; i++) {
        for (j = 0; j < 26; j++) {
            if (num[j] < num[j + 1]) {
                t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
                t = alp[j];
                alp[j] = alp[j + 1];
                alp[j + 1] = t;
            }
        }
    } // 從頭開始比大小，數量越大的放越前面，再將數量位置被移動過的字母換過去同指標處
    for (j = 0; j < 26; j++)
        if (num[j])
            printf("%c %d\n", alp[j], num[j]); // 把數量大於零的英文字母及數量印出
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10008 - What's Cryptanalysis?
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=949
 * Status: AC
 */

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool cmp(const pair<int, char> &a, const pair<int, char> &b) {
    if (a.first == b.first)
        return a.second < b.second;

    return a.first > b.first;
}

int main() {

    int n;
    vector<int> frequency(26, 0);
    string s;

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);

        for (char c : s) {
            if (isalpha(c))
                frequency[toupper(c) - 'A']++;
        }
    }

    vector<pair<int, char>> frequencyList;
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            // frequencyList.emplace_back(frequency[i], 'A' + i);
            frequencyList.push_back(make_pair(frequency[i], 'A' + i));
        }
    }

    sort(frequencyList.begin(), frequencyList.end(), cmp);

    for (auto member : frequencyList)
        printf("%c %d\n", member.second, member.first);

    return 0;
}

/*
 * Author: @1chooo
 * Title: 10008 - What's Cryptanalysis?
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=949
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(void) {

    int n;
    string s;
    int frequency[26] = {0};

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, s);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                frequency[s[i] - 'A']++;
            else if (s[i] >= 'a' && s[i] <= 'z')
                frequency[s[i] - 'a']++;
        }
    }

    int maxindex;
    for (int i = 0; i < 26; i++) {
        maxindex = 0;
        for (int j = 0; j < 26; j++) {
            if (frequency[maxindex] < frequency[j])
                maxindex = j;
        }
        if (frequency[maxindex] != 0) {
            printf("%c %d\n", 'A' + maxindex, frequency[maxindex]);
            frequency[maxindex] = 0;
        }
    }

    return 0;
}
