/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d460
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int age;

    cin >> age;

    if (age >= 0 && age <= 5) {
        cout << 0 << endl;
    } else if (age >= 6 && age <= 11) {
        cout << 590 << endl;
    } else if (age >= 12 && age <= 17) {
        cout << 790 << endl;
    } else if (age >= 18 && age <= 59) {
        cout << 890 << endl;
    } else {
        cout << 399 << endl;
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d460
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    int age;

    cin >> age;

    const long long int tab[8] = {0, 6, 12, 18, 60, 2147483648};
    const int price[8] = {0, 590, 790, 890, 399};

    for (int i = 0; i < 5; i++) {
        if (age >= tab[i] && age < tab[i + 1]) {
            cout << price[i] << endl;
            break;
        }
    }

    return 0;
}
