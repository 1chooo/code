/*
 * Author: @1chooo
 * Title: 10420 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {

    int lines = 0;
    int i = 0;
    map<string, int> countries;
    string tmp;

    cin >> lines;

    while (lines--) {
        cin >> tmp;
        countries[tmp]++;
        getline(cin, tmp);
    }

    for (map<string, int>::iterator i = countries.begin(); i != countries.end(); i++)
        cout << i->first << " " << i->second << endl;
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10420 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <cstdio>
#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main() {
    int n;
    map<string, int> record;
    while (scanf("%d", &n) == 1) {
        string country, tmp;
        while (n--) {
            cin >> country;
            record[country]++;
            getline(cin, tmp);
        }
        for (map<string, int>::iterator i = record.begin(); i != record.end(); i++)
            cout << i->first << " " << i->second << endl;
    }
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10420 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    int n;
    string str;
    map<string, int> mp;

    cin >> n;

    while (n--) {
        cin >> str;
        mp[str]++;
        getline(cin, str);
    }

    for (auto i : mp) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}

/*
 * Author: @1chooo
 * Title: 10420 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int compare(const void *, const void *);

int main() {
    int n, count, j;
    string name;

    cin >> n;
    string countries[n];

    for (int i = 0; i < n; i++) {
        cin >> countries[i];
        getline(cin, name);
    }

    sort(countries, countries + n);

    for (int i = 0; i < n;) {
        cout << countries[i] << " ";
        count = 1;

        for (j = i + 1; j < n; j++) {
            // countries[] has been sorted,
            // so if c[i] != c[j] present that it won't have the same country after c[j]
            if (countries[i] != countries[j]) {
                break;
            }
            count++;
        }
        i = j;
        cout << count << endl;
    }
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10420 - List of Conquests
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=16&page=show_problem&problem=1361
 * Status: AC
 */

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> c;
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    for (int i = 0; i < n; i++) {
        string tem = "";
        getline(cin, str);
        for (auto iter = str.begin(); iter != str.end(); iter++) {
            if (*iter == ' ')
                break;
            tem += *iter;
        }
        c[tem]++;
    }
    for (auto i = c.begin(); i != c.end(); i++)
        cout << i->first << " " << i->second << "\n";
    return 0;
}