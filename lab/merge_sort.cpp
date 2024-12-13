#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;
    int mainIndex = start;

    // creating 2 copy array
    int arr1[len1], arr2[len2];

    // coping left part
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainIndex++];
    }

    // coping right part
    for (int j = 0; j < len2; j++)
    {
        arr2[j] = arr[mainIndex++];
    }

    // sorting the array
    int i = 0, j = 0, oldArrayindex = start;
    while (i < len1 & j < len2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[oldArrayindex++] = arr1[i++];
        }
        else
        {
            arr[oldArrayindex++] = arr2[j++];
        }
    }

    // coping remaining elements
    while (i < len1)
    {
        arr[oldArrayindex++] = arr1[i++];
    }

    while (j < len2)
    {
        arr[oldArrayindex++] = arr2[j++];
    }
}

void mergeSort(int arr[], int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int n;
    cout << "Enter the array length : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for position " << i << "-> ";
        cin >> arr[i];
        cout << endl;
    }

    mergeSort(arr, 0, n - 1);

    cout << "Array after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
