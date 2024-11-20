#include <iostream>
using namespace std;

int main()
{
    int arr[4][5];

    // input element in array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "enter element for position: " << i << j << endl;
            cin >> arr[i][j];
        }
    }

    // output the array element
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
