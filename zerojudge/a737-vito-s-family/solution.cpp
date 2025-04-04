/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a737
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