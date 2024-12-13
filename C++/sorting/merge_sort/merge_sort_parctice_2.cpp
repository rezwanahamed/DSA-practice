#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Use stack allocation for temporary arrays
    int arr1[len1], arr2[len2];

    // Copy the left and right parts of the array
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[start + i];
    }
    for (int j = 0; j < len2; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, mainIndex = start;

    // Merge the two arrays into the main array
    while (i < len1 && j < len2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[mainIndex++] = arr1[i++];
        }
        else
        {
            arr[mainIndex++] = arr2[j++];
        }
    }

    // Copy any remaining elements from the left array
    while (i < len1)
    {
        arr[mainIndex++] = arr1[i++];
    }

    // Copy any remaining elements from the right array
    while (j < len2)
    {
        arr[mainIndex++] = arr2[j++];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = (end + start) / 2; // Avoid potential overflow
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    cout << "Before sorting the array:" << endl;
    int arr[] = {
        37, 85, 62, 9, 14, 54, 77, 26, 3, 42,
        67, 95, 21, 1, 11, 92, 19, 74, 6, 48,
        88, 53, 36, 17, 29, 71, 38, 55, 82, 25,
        64, 41, 76, 18, 34, 2, 93, 57, 44, 16,
        96, 24, 63, 86, 7, 10, 22, 12, 91, 47,
        31, 68, 45, 80, 49, 33, 58, 83, 60, 35,
        4, 98, 81, 70, 27, 13, 46, 30, 32, 8,
        78, 40, 28, 15, 23, 20, 59, 50, 90, 84,
        5, 66, 61, 75, 43, 39, 72, 52, 56, 79,
        94, 89, 73, 87, 51, 99, 65, 100, 97, 69};

    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "\nAfter sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
