#include <iostream>
using namespace std;

int main()
{
    int row, column;

    cout << "Enter number of row:";
    cin >> row;

    cout << "Enter number of column: ";
    cin >> column;

    int arr[row][column];

    if (row == column)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Enter element for position " << i << j << " :";
                cin >> arr[i][j];
            }
            cout << endl;
        }
        int ans = 1;

        for (int i = 0; i < row; i++)
        {

            for (int j = 0; j < column; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (arr[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }

        if (ans == 1)
        {
            cout << "It is a valid diagonal matrix" << endl;
        }
        else
        {
            cout << "Not diagonal matrix" << endl;
        }
    }
    else
    {
        cout << "Not a square matrix" << endl;
    }

    return 0;
}
