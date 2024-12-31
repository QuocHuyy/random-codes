#include<iostream>
using namespace std;

int main()
{
    // cout << " ------------------- " << endl;
    // cout << "| 1 | 2 | 3 | 4 | 5 |" << endl;
    // cout << " ------------------- " << endl;
    // cout << "| 1 | 2 | 3 | 4 | 5 |" << endl;
    // cout << " -----|------------- " << endl;
    // cout << "| 1 | 2 | 3 | 4 | 5 |" << endl;
    // cout << " ------------------- " << endl;
    // cout << "| 1 | 2 | 3 | 4 | 5 |" << endl;
    // cout << " -------------|----- " << endl;
    // cout << "| 1 | 2 | 3 | 4 | 5 |" << endl;
    // cout << " ------------------- " << endl;

    int numRow, numCol;
    cin >> numRow >> numCol;
    for(int i = 0; i < numRow; i ++)
    {
        cout << " ";
        for(int j = 0; j < numCol*5 - numCol - 1 ; j++)
            cout << "-";
        cout << endl;
        for(int j = 0; j < numCol; j++)
            cout << "| 1 ";
        cout << "|" << endl;
    }

    cout << " ";
    for(int i = 0; i < numCol*5 - numCol - 1; i++)
        cout << "-";
    cout << endl;

    return 0;
}