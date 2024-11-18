#include <iostream>
#include <string>
using namespace std;

int main() {
    string is1;               // 輸入用字串
    int i = 0;                // 方便用
    int side = 0;             // side為0代表現在是左邊的雙引號
                              // side為1就是右邊
    while (getline(cin, is1)) // 輸入資料
    {

        for (i = 0; i < is1.length(); i++) {
            if (is1[i] == '"' && side == 0) // 左邊的雙引號
            {
                cout << "``";
                side = 1;
            } else if (is1[i] == '"' && side == 1) // 右邊雙引號
            {
                cout << "''";
                side = 0;
            } else // 沒雙引號
            {
                cout << is1[i];
            }
        }
        cout << endl; // 換行
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string tmp;
    int length;
    int count = 0;

    while (getline(cin, tmp)) {
        length = tmp.length();

        for (int i = 0; i < length; i++) {
            if (tmp[i] == '\"') {
                count++;

                if (count % 2 == 1) { // left-double-quote
                    cout << "``";
                } else {
                    cout << "''"; // right-double-quote
                }
            } else {
                cout << tmp[i];
            }
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string tmp;
    int length;
    int count = 0;

    while (getline(cin, tmp)) {
        length = tmp.length();

        for (int i = 0; i < length; i++) {
            if (tmp[i] == '\"') {
                count++;

                if (count % 2 == 1) { // left-double-quote
                    cout << "``";
                } else {
                    cout << "''"; // right-double-quote
                }
            } else {
                cout << tmp[i];
            }
        }
        cout << endl;
    }
    return 0;
}
