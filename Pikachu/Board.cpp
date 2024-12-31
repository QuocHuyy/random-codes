#include <iostream>
using namespace std;

const int wCell = 11, hCell = 5;

void printCell(int x)
{
    cout << " ";
    for(int i = 1; i < wCell - 1; i++)
    {
        cout << "-";
    }
    cout << " " << endl;

    for(int i = 1; i < hCell - 1; i++)
    {
        cout << "|";
        for(int j = 1; j < wCell - 1; j++)
        {+
            if(i == hCell/2 && j == wCell/2)
                cout << x;
            else
                cout << " ";
        }
        cout << "|" << endl;
    }

    cout << " ";
    for(int i = 1; i < wCell - 1; i++)
    {
        cout << "-";
    }
    cout << " ";

}

void printBoard(int board[5][5], int nRow, int nCol)
{
    for(int i = 0; i < nRow; i++)
    {
        for(int j = 0; j < nCol; j++)
            printCell(board[i][j]);
        cout << endl;
    }
}

int main()
{
    int nRow, nCol;
    cin >> nRow >> nCol;
    int board[5][5] = {{ 1,  2,  3,  4,  5},
                       { 6,  7,  8,  9, 10},
                       {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20},
                       {21, 22, 23, 24, 25}};
    printBoard(board, nRow, nCol);
    return 0;
}