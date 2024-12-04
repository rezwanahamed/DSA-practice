#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    // step 1 choose pivot and pivot index
    int pivot = arr[s];

    // step 2 count the small elements numbers then pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (pivot >= arr[i])
        {
            count++;
        }
    }

    int pivotIndex = s + count;

    // step 3 swap pivot element
    swap(arr[pivotIndex], arr[s]);

    // step 4 swap elements
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot) // Find element greater than pivot
        {
            i++;
        }

        while (arr[j] > pivot) // Find element smaller than pivot
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
};

void quickSort(int *arr, int s, int e)
{


    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // left part
    quickSort(arr, s, p - 1);

    // right part
    quickSort(arr, p + 1, e);

    cout << "The value of s: is " << s << endl;
};
int main()
{
    int arr[5] = {5,2,4,7,8};
    int n = 5;

    cout << "Before sorting" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After sorting" << endl;
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
