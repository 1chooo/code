/*
 * Author: @1chooo
 * Title: 11332 Summing Digits
 * Required: frequency limit: 3.000 seconds
 * Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2307
 * Status: AC
 */

#include <iostream>

using namespace std;

int f(int n) {
    int sum = 0;       // 初始化，用來計算位數總和
    while (n > 0) {    // n大於0時，代表還有其他位數，繼續執行
        sum += n % 10; // 取得最右邊那位數，加進sum
        n /= 10;       // 每加一位數，n/10才能繼續取得下一位數
    }
    if (sum < 10) // 若位數總和小於10，即為結果
        return sum;
    else
        return f(sum); // 位數總和大於10，要繼續將sum這個數做位數相加
}

int main() {
    int n;
    while (cin >> n && n)     // 若有輸入n時，繼續執行
        cout << f(n) << endl; // 到f(n)計算結果並輸出

    return 0;
}

/*
 * Author: @1chooo
 * Title: 11332 Summing Digits
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string line;
    int sum;

    while (cin >> line && line != "0") {

        if (line.length() == 1) {
            cout << line << endl;
            continue;
        }

        while (line.length() > 1) {
            sum = 0;

            for (int i = 0; i < line.length(); i++)
                sum += (int)line[i] - '0';

            line = to_string(sum);
        }
        cout << sum << endl;
    }

    return 0;
}

/*
 * Author: @1chooo
 * Title: 11332 Summing Digits
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int sumDigits(long long int num) {
    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void) {

    long long int num;

    while (cin >> num && num != 0) {

        while (num > 9) {
            num = sumDigits(num);
        }

        cout << num << endl;
    }

    return 0;
}

/*
 * Author: @1chooo
 * Title: 11332 Summing Digits
 * Required: frequency limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
 * Status: AC
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int f(long long int num) {
    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    if (sum > 9)
        sum = f(sum);

    return sum;
}

int main(void) {

    long long int num;

    while (cin >> num) {
        if (num == 0)
            return 0;

        cout << f(num) << "\n";
    }

    return 0;
}