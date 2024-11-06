/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=a010
 * Status: AC
 */

#include <iostream>

using namespace std;

void factorization (int);

int main ()
{
    int number;
    cin >> number;

    factorization(number);

    return 0;
}


void factorization (int number)
{
    int divisor = 2;

    while (number != 1)
    {
        int count = 0;

        while (number % divisor == 0) 
        {
            if (count == 0) cout << divisor;
            number = number / divisor;
            count++;
        }

        if (count > 1) cout << "^" << count;
        if (number != 1 && count != 0)
            cout << " * ";
        divisor++;
    }
}