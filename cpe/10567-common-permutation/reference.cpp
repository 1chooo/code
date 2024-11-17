#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int countA, countB;

    char tmp;

    while (getline(cin, a) && getline(cin, b)) {
        countA = 0;
        countB = 0;
        int letter[26] = {0};

        for (int i = 0; i < 26; i++) {
            countA = count(a.begin(), a.end(), 97 + i);
            countB = count(b.begin(), b.end(), 97 + i);

            letter[i] = min(countA, countB);

            if (letter[i] != 0) {
                for (int j = 0; j < letter[i]; j++) {
                    tmp = 97 + i;
                    cout << tmp;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int ch1[26], ch2[26], ch[26];
    string s1, s2;
    while (getline(cin, s1)) {
        getline(cin, s2);
        memset(ch1, 0, sizeof(ch1));
        memset(ch2, 0, sizeof(ch2));
        memset(ch, 0, sizeof(ch));
        for (int i = 0; i < s1.length(); i++) { // 統計第一個字串的字母出現頻率
            ch1[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++) { // 統計第二個字串的字母出現頻率
            ch2[s2[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (ch1[i] < ch2[i])
                ch[i] = ch1[i]; // 取第一個與第二個字串的字母出現頻率較小的
            else
                ch[i] = ch2[i];
            if (ch[i] > 0) { // 輸出結果
                for (int j = 0; j < ch[i]; j++) {
                    cout << char('a' + i);
                }
            }
        }
        cout << endl;
    }
}

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    while (getline(cin, a), getline(cin, b)) {
        int aCounts[128], bCounts[128];
        for (int i = 'a'; i <= 'z'; ++i)
            aCounts[i] = bCounts[i] = 0;

        for (int i = 0; i < a.size(); ++i)
            ++aCounts[a[i]];

        for (int i = 0; i < b.size(); ++i)
            ++bCounts[b[i]];

        string longest = "";

        for (int i = 'a'; i <= 'z'; ++i)
            while (aCounts[i] > 0 && bCounts[i] > 0) {
                longest += (char)i;
                --aCounts[i];
                --bCounts[i];
            }

        cout << longest << '\n';
    }
}

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b; // 輸入用字串
    int i, t;    // 方便用

    while (getline(cin, a)) // 輸入資料
    {
        getline(cin, b); // 輸入資料

        string re[1000] = {""}; // 記錄用陣列

        for (i = 0; i < a.length(); i++) // 使用雙重迴圈比對
        {
            for (t = 0; t < b.length(); t++) {
                if (a[i] == b[t]) // 找到重複的字
                {
                    re[i] = a[i];  // 紀錄
                    b.erase(t, 1); // 擦掉該字避免重複找查
                    break;         // 直接結束第二個迴圈， 理由同上
                }
            }
        }

        sort(re, re + 1000); // 排序

        for (i = 0; i < 1000; i++) // 輸出
        {
            cout << re[i];
        }

        cout << endl; // 記得換行
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    int cota[26], cotb[26];
    while (getline(cin, a)) {
        getline(cin, b);
        if (a == " " || b == " ") {
            cout << "\n";
        }
        memset(cota, 0, sizeof cota);
        memset(cotb, 0, sizeof cotb);
        for (int i = 0; i < a.length(); i++) {
            cota[a[i] - 'a']++;
        }
        for (int i = 0; i < b.length(); i++) {
            cotb[b[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            for (int j = min(cota[i], cotb[i]); j > 0; j--) {
                cout << (char)('a' + i);
            }
        }
        cout << "\n";
    }
}
