#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int leftPartLength = mid - s + 1;
    int rightPartLength = e - mid;

    int *leftArray = new int[leftPartLength];
    int *rightArray = new int[rightPartLength];

    // copy first array
    int mainArrayIndex = s;
    for (int i = 0; i < leftPartLength; i++)
    {
        leftArray[i] = arr[mainArrayIndex++];
    }

    // copy second array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < rightPartLength; i++)
    {
        rightArray[i] = arr[mainArrayIndex++];
    }

    // marging array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < leftPartLength && index2 < rightPartLength)
    {
        if (leftArray[index1] < rightArray[index2])
        {
            arr[mainArrayIndex++] = leftArray[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = rightArray[index2++];
        }
    }

    // copy left rest elements
    while (index1 < leftPartLength)
    {
        arr[mainArrayIndex++] = leftArray[index1++];
    }

    // copy right rest elements
    while (index2 < rightPartLength)
    {
        arr[mainArrayIndex++] = rightArray[index2++];
    }

    // free memory
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // left part
    mergeSort(arr, s, mid);

    // right part
    mergeSort(arr, mid + 1, e);

    // marge the array
    merge(arr, s, e);
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(int);

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
