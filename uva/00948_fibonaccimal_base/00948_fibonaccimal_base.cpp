// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=889

#include <iostream>

using namespace std;

int main() {
    int f[40] = {0, 1};          // Declare an integer array f of length 40, and assign values 0, 1 to the first two elements
    for (int k = 2; k < 40; k++) // Use a for loop to set the k-th element to the sum of the previous two elements until the array is filled
        f[k] = f[k - 1] + f[k - 2];
    
    int n;
    cin >> n;     // Input an integer n as the number of test cases
    while (n--) { // Enter the while loop as long as n-1 is not 0
        int m;
        cin >> m;                       // Input an integer m as the test case
        cout << m << " = ";             // Output "m = " as per the format requirement
        bool preone = false;            // Declare a boolean preone and set it to false
        for (int k = 39; k >= 2; k--) { // Use a for loop to compare from the last element of the f array
            if (m >= f[k]) {            // If the test case is greater than or equal to the k-th element of the Fibonacci array
                cout << "1";            // Output 1
                m -= f[k];              // Subtract the Fibonacci number from m
                preone = true;          // Set preone to true as the first 1 is found, only then can we output 0
            } else if (preone) {
                cout << "0";            // Output 0 if preone is true
            }
        }
        cout << " (fib)" << endl;       // Output " (fib)" as per the format requirement
    }
    return 0;
}
