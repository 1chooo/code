/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d984
 * Status: AC
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;
    const char candidates[3] = {'A', 'B', 'C'};

    while (cin >> a >> b >> c) {
        if (a > b && a > c) {
            if (a > b + c) {
                cout << candidates[0] << endl;
            } else if (b > c) {
                cout << candidates[1] << endl;
            } else {
                cout << candidates[2] << endl;
            }
        } else if (b > a && b > c) {
            if (b > a + c) {
                cout << candidates[1] << endl;
            } else if (a > c) {
                cout << candidates[0] << endl;
            } else {
                cout << candidates[2] << endl;
            }
        } else {
            if (c > a + b) {
                cout << candidates[2] << endl;
            } else if (a > b) {
                cout << candidates[0] << endl;
            } else {
                cout << candidates[1] << endl;
            }
        }
    }

    return 0;
}

/*
 * Author: 1chooo <hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=d984
 * Status: AC
 */

#include <algorithm>
#include <iostream>

using namespace std;

char findWinner(long long numA, long long numB, long long numC) {
    const char candidates[3] = {'A', 'B', 'C'};
    long long nums[3] = {numA, numB, numC};

    int maxIndex = max_element(nums, nums + 3) - nums;

    long long sumOfOthers = nums[(maxIndex + 1) % 3] + nums[(maxIndex + 2) % 3];

    if (nums[maxIndex] > sumOfOthers) {
        return candidates[maxIndex];
    }

    return (nums[(maxIndex + 1) % 3] > nums[(maxIndex + 2) % 3])
               ? candidates[(maxIndex + 1) % 3]
               : candidates[(maxIndex + 2) % 3];
}

int main() {
    long long numA;
    long long numB;
    long long numC;

    while (cin >> numA >> numB >> numC) {
        cout << findWinner(numA, numB, numC) << endl;
    }

    return 0;
}
