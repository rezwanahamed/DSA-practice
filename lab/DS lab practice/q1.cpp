#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at position: " << i << endl;
            break;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    linearSearch(arr, size, 3);
    return 0;
}
