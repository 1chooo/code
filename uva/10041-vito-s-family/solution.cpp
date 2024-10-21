/*
 * Author: @1chooo
 * Title: 10041 - Vito's Family
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

void quickSort(int[], int, int);

int main(void) {

    int cases;
    int i, j;
    int streetNumbers[30000] = {0};

    cin >> cases;

    while (cases--) {
        int relatives; // 0 < r < 500.

        cin >> relatives;
        for (i = 0; i < relatives; i++)
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
    int i = left, j = right;
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
 * Author: @1chooo
 * Title: 10041 - Vito's Family
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <iostream>
#include <vector>
// 題目：有個人要搬家，找出他跟每個親戚最短距離的合
/*
    輸入：
        1.幾個案例
        2.有幾個親戚
        3.每個親戚分別住
*/
// 輸出：找出他跟每個人的最短距離的合
using namespace std;
vector<int> num;

int main() {
    int n, k, d;
    cin >> n;
    while (n--) {
        cin >> k;
        num.clear(); // 不同的case，每次都要清空 vector
        for (int i = 0; i < k; i++) {
            cin >> d;
            num.push_back(d); // 用 push_back() 把值從 vector 的最後一個位置插入
        }
        sort(num.begin(), num.end()); // 由小到大排序，begin() 為第一個位置，end() 為末端的後一個位置
        int mid = num[k / 2];         // 取中間值，在中間走到每個點的距離和必定是最短的
        int sum = 0;                  // 不同的case，每次都要歸零 sum
        for (int i = 0; i < k; i++) {
            sum += abs(num[i] - mid); // 用 abs() 取絕對值，加總出路徑和
        }
        cout << sum << endl;
    }
    return 0;
}

/*
 * Author: @1chooo
 * Title: 10041 - Vito's Family
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

void quickSort(int[], int, int);

int main(void) {

    int cases;
    int i, j;
    int streetNumbers[30000] = {0};

    cin >> cases;

    while (cases--) {
        int relatives; // 0 < r < 500.

        cin >> relatives;
        for (i = 0; i < relatives; i++)
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
    int i = left, j = right;
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
 * Author: @1chooo
 * Title: 10041 - Vito's Family
 * Required: Time limit: 3.000 seconds
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Status: AC
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
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

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    void solve() {
        int cases;
        cin >> cases;

        while (cases--) {
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
