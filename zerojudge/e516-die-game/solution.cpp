/*
 * Author: 1chooo<hugo970217@gmail.com>
 * Problem link: https://zerojudge.tw/ShowProblem?problemid=e516
 * Status: AC
 */

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int numMoves;

    while (cin >> numMoves) {
        if (numMoves <= 0)
            break;

        int top = 1;
        int north = 2;
        int west = 3;
        int east = 4;
        int south = 5;
        int bottom = 6;

        for (int i = 0; i < numMoves; i++) {
            string direction;
            int temp;
            cin >> direction;
            switch (direction[0]) {
            case 'n':
                temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
                break;
            case 's':
                temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
                break;
            case 'e':
                temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
                break;
            case 'w':
                temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
                break;
            }
        }

        cout << top << endl;
    }

    return 0;
}
