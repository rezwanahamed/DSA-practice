#include <iostream>
using namespace std;

bool checkSorted(int arr[], int size)
{
    if (size <= 1)
    {
        return true;
    }
    if (arr[size - 1] > arr[size])
    {
        return false;
    }

    // recursive call 
    //because the return type is not void so we need to return the recursive call
    return checkSorted(arr, size - 1);
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);

    if (checkSorted(arr, size - 1))
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
