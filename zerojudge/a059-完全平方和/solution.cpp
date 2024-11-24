/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a059
 * Status: AC
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void) {
    int T;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        int a, b;
        int sum = 0;
        cin >> a >> b;

        for (int j = a; j <= b; j++){
    		for (int k = 1; k <= sqrt(j); k++){
    			if (j == k * k)
    			  sum += j;
    		}
    	}

        printf("Case %d: %d\n", i, sum);
    }
    
    return 0;
}