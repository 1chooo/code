/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=199
 * Status: AC
 */

#include <algorithm>
#include <iostream>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

bool compareDescending(char a, char b);

int main(void) {
    string input;

    while (getline(cin, input) && input != "0") {
        set<long long> visitedNumbers = {0};
        stringstream inputStream(input);
        long long originalNumber = 0, descendingNumber = 0, ascendingNumber = 0;
        inputStream >> originalNumber;

        cout << "Original number was " << originalNumber << endl;
        
        while (true) {
            sort(input.begin(), input.end(), compareDescending);
            stringstream descendingStream(input);
            descendingStream >> descendingNumber;

            sort(input.begin(), input.end());
            stringstream ascendingStream(input);
            ascendingStream >> ascendingNumber;

            long long difference = descendingNumber - ascendingNumber;
            cout << descendingNumber << " - " << ascendingNumber << " = " << difference << endl;

            if (visitedNumbers.find(difference) != visitedNumbers.end()) {
                break;
            }

            visitedNumbers.insert(difference);

            stringstream differenceStream;
            differenceStream << difference;
            differenceStream >> input;
        }

        printf("Chain length %d\n\n", static_cast<int>(visitedNumbers.size() + 1));
    }

    return 0;
}

bool compareDescending(char a, char b) {
    return a > b;
}
