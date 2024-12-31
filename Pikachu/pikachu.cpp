#include <iostream>
// #include "screen.cpp"
using namespace std;

void printBoard(int board[5][5], int nRow, int nCol, int wCell, int hCell)
{
    for(int i = 0; i < nRow; i ++)
    {
        cout << " ";
        for(int j = 0; j < nCol*wCell - nCol - 1 ; j++)
            cout << "-";
        cout << endl;
        for(int j = 0; j < hCell; j++)
        {
            for(int k = 0; k < nCol*wCell - nCol + 1; k++)
            {
                if (k % (wCell - 1) == 0)
                    cout << "|";
                else if((j == hCell/2) && (k % (wCell/2) == 0))
                    cout << "1";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    cout << " ";
    for(int i = 0; i < nCol*wCell - nCol - 1; i++)
        cout << "-";
    cout << endl;
}

int main()
{
    int nRow, nCol, wCell, hCell;
    cin >> nRow >> nCol >> wCell >> hCell;
    if (wCell % 2 == 0) wCell --;
    if (hCell % 2 == 0) hCell --;

    int board[5][5] = {{ 1,  2,  3,  4,  5},
                       { 6,  7,  8,  9, 10},
                       {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20},
                       {21, 22, 23, 24, 25}};

    printBoard(board, nRow, nCol, wCell, hCell);
    return 0;
}