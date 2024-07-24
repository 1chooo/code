/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a034
*  Status: AC
*/

#include <iostream>
#include <cstdlib>
#include <stack>

#define MAX_SIZE 1000

using namespace std;

int main(void) {
    int inNum;

    while (cin >> inNum) {
        char ans[MAX_SIZE];
        int init = 0;

        while (inNum > 0) {
            if (inNum % 2 == 0) {
                ans[init] = '0';
                inNum /= 2;
                init++;
            } else {
                ans[init] = '1';
                inNum = (inNum - 1) / 2;
                init++;
            }
        }

        for (int i = init - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << "\n";
    }
    
    return 0;
}

/*
#include <iostream>
#include <stack>
using namespace std;
 
int main()
{
    // Empty stack
    stack<int> mystack;
    mystack.push(0);
    mystack.push(1);
    mystack.push(2);
 
    // Printing content of stack
    while (!mystack.empty()) {
        cout << ' ' << mystack.top();
        mystack.pop();
    }
}
*/