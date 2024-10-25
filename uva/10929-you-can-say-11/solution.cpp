/*
 * Author: @1chooo
 * Title: 10929 - You can say 11
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string num;

    while (cin >> num && num != "0") {
        int odd = 0, even = 0;
        int sum = 0;

        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 1)
                odd += num[i] - '0';
            else
                even += num[i] - '0';
        }

        sum = odd - even;

        if (sum % 11 == 0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }

    return 0;
}

/*
 * Author: @1chooo
 * Title: 10929 - You can say 11
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string is1; // 數字會很大用字串來處理

    while (cin >> is1) // 輸入
    {
        if (is1 == "0") // 輸入0代表結束
        {
            break;
        }

        int odd = 0, even = 0;                 // odd計算奇數位數的加總
                                               // even計算偶數位數的加總
        for (int i = 0; i < is1.length(); i++) // 計算奇數偶位數加總
        {
            if (i % 2 == 1) // 計算奇數位數加總
            {
                odd = odd + (is1[i] - '0'); // 字串某一個字來計算會用ASCII碼
                                            // 因為數字的ASCII碼相連
                                            // 所以減掉'0'的ASCII碼就是字串的數字了
            } else {
                even = even + (is1[i] - '0');
            }
        }

        if ((odd - even) % 11 == 0) // 奇偶位數整除11就是11的倍數
        {
            cout << is1 << " is a multiple of 11." << endl;
        } else {
            cout << is1 << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10929 - You can say 11
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <iostream>

using namespace std;

int main() {
    int i, sum;
    char n[1001];
    while (cin >> n) {
        if (n[0] == '0')
            break;
        for (sum = i = 0; n[i] != '\0'; i++) {
            if (i % 2 == 1)
                sum = sum + (n[i] - '0');
            if (i % 2 == 0)
                sum = sum - (n[i] - '0');
        }
        if (sum % 11 == 0)
            cout << n << " is a multiple of 11." << endl;
        else
            cout << n << " is not a multiple of 11." << endl;
    }
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10929 - You can say 11
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
 * Status: AC
 */

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string num;
    while (getline(cin, num)) {
        if (num == "0")
            break;
        int a = 0, b = 0;
        for (int i = 0; i < num.length(); i++) {
            int n = num[i] - '0';
            if (i % 2 == 0)
                a += n;
            else
                b += n;
        }
        if ((a - b) % 11 == 0)
            cout << num << " is a multiple of 11." << endl;
        else
            cout << num << " is not a multiple of 11." << endl;
    }

    return 0;
}