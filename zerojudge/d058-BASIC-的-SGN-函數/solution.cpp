/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d058
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    cin >> n;

    if (n >= 0) {
        if (n >= 1) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d058
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int n = 0;
    cin >> n;

    (n >= 0) ? cout << ((n >= 1) ? 1 : 0) << endl : cout << -1 << endl;

    return 0;
}