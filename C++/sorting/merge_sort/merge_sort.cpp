#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy first half into first array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    // Copy second half into second array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first array (if any)
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy remaining elements of second array (if any)
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free dynamically allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e) // means only one element remain
    {
        return;
    }

    int mid = (s + e) / 2;

    // Sort the left part
    mergeSort(arr, s, mid);

    // Sort the right part
    mergeSort(arr, mid + 1, e);

    // Merge the sorted parts
    merge(arr, s, e);
}

int main()
{
    // Sample array
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Perform merge sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
