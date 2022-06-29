/*
*  Problem link: https://zerojudge.tw/ShowProblem?problemid=a015
*  Status: AC
*/

#include <iostream>

using namespace std;

int main () 
{
    int row, column;
    int matrix[100][100];
    int matrixT[100][100];

    while (cin >> row >> column)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < row + column; i++)
        {
            for (int j = 0; j < row + column; j++)
            {
                matrixT[j][i] = matrix[i][j];
            }
        }

        for (int i = 0; i < column; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cout << matrixT[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}