/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

void quickSort(int[], int, int);

int main(void) {

    int testCase;

    cin >> testCase;

    while (testCase--) {
        int relatives;
        cin >> relatives;

        int streetNumbers[30000] = {0};
        for (int i = 0; i < relatives; i++)
            cin >> streetNumbers[i];

        quickSort(streetNumbers, 0, relatives - 1);

        int median = 0;
        if (relatives % 2 == 0) {
            int mid = relatives / 2;
            median = (streetNumbers[mid - 1] + streetNumbers[mid]) / 2;
        } else {
            median = streetNumbers[relatives / 2];
        }

        int totalDistance = 0;
        for (int i = 0; i < relatives; i++)
            totalDistance += abs(streetNumbers[i] - median);

        cout << totalDistance << endl;
    }

    return 0;
}

void quickSort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> num;

int main(void) {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int k;
        cin >> k;

        num.clear();

        for (int i = 0; i < k; i++) {
            int d;
            cin >> d;
            num.push_back(d);
        }
        sort(num.begin(), num.end());

        int mid = num[k / 2];
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += abs(num[i] - mid);
        }

        cout << sum << endl;
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

void quickSort(int[], int, int);

int main(void) {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int relatives;
        cin >> relatives;

        int streetNumbers[30000] = {0};
        for (int i = 0; i < relatives; i++)
            cin >> streetNumbers[i];

        quickSort(streetNumbers, 0, relatives - 1);

        int median = 0;
        if (relatives % 2 == 0) {
            int mid = relatives / 2;
            median = (streetNumbers[mid - 1] + streetNumbers[mid]) / 2;
        } else {
            median = streetNumbers[relatives / 2];
        }

        int totalDistance = 0;
        for (int i = 0; i < relatives; i++)
            totalDistance += abs(streetNumbers[i] - median);

        cout << totalDistance << endl;
    }

    return 0;
}

void quickSort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int middle = arr[n / 2];
        int all = 0;

        for (int i = 0; i < n; i++) {
            all += abs(arr[i] - middle);
        }

        cout << all << endl;
    }

    return 0;
}

/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    void solve() {
        int testCase;
        cin >> testCase;

        while (testCase--) {
            int relatives;
            cin >> relatives;

            vector<int> streetNumbers(relatives);
            for (int i = 0; i < relatives; i++) {
                cin >> streetNumbers[i];
            }

            sort(streetNumbers.begin(), streetNumbers.end());

            int median = 0;
            if (relatives % 2 == 0) {
                int mid = relatives / 2;
                median = (streetNumbers[mid - 1] + streetNumbers[mid]) / 2;
            } else {
                median = streetNumbers[relatives / 2];
            }

            int totalDistance = 0;
            for (int i = 0; i < relatives; i++) {
                totalDistance += abs(streetNumbers[i] - median);
            }

            cout << totalDistance << endl;
        }
    }
};

int main() {
    Solution s;
    s.solve();

    return 0;
}
