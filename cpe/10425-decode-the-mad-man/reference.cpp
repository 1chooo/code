#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string input;
    int index = 0;

    getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            cout << " ";
            continue;
        }
        index = keyboard.find(input[i]) - 2;
        cout << keyboard[index];
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main() {
    string cs1 = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    // 建立比對用的字串，先按空白鍵，之後從鍵盤左邊按到右邊就對了。
    string is1;
    while (getline(cin, is1)) // 輸入
    {

        for (int i = 0; i < is1.length(); i++) // 開始一個一個比對
        {
            if (is1[i] >= 'A' && is1[i] <= 'Z') // 先大寫換成小寫
            {
                is1[i] = is1[i] + 32;
            }

            for (int t = 0; t < cs1.length(); t++) // 逐一比對cs1
            {
                if (is1[i] == cs1[0]) // 空白鍵不用轉換
                {
                    cout << " ";
                    break;
                }

                else if (is1[i] == cs1[t]) // 輸出左邊兩個鍵盤的字
                {
                    cout << cs1[t - 2];
                    break;
                }
            }
        }
        cout << endl; // 換行
    }
    return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s[] = {"~!@#$%^&*()_+",
                  "`1234567890-=",
                  "qwertyuiop[]\\",
                  "asdfghjkl;'",
                  "zxcvbnm,./"};

    map<char, char> mp;
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < s[i].size(); j++) {
            mp[s[i][j]] = s[i][j - 2];
        }
    }
    string S;
    while (getline(cin, S)) {
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == ' ')
                cout << " ";
            else
                cout << mp[S[i]];
        }
        cout << "\n";
    }
    return 0;
}
