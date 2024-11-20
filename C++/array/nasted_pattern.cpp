#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        if (i == 1 || i == size)
        {
            for (int j = 1; j <= size; j++)
            {
                cout << "#";
            }
        }
        else
        {
            for (int k = 1; k <= size; k++)
            {
                if (k == 1 || k == size)
                {
                    cout << "#";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
