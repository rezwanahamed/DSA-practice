#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    int mid = (start + end) / 2;
    int leftArrayLength = mid - start + 1;
    int rightArrayLength = end - mid;

    // creating two new array
    vector<int> leftArray(leftArrayLength);
    vector<int> rightArray(rightArrayLength);

    // coping left array elements
    for (int i = 0; i < leftArrayLength; i++)
    {
        leftArray[i] = arr[start + i];
    }

    // coping right array elements
    for (int j = 0; j < rightArrayLength; j++)
    {
        rightArray[j] = arr[mid + 1 + j];
    }

    // sorting the elements
    int i = 0, j = 0, index = start;
    while (i < leftArrayLength && j < rightArrayLength)
    {
        if (leftArray[i] < rightArray[j])
        {
            arr[index++] = leftArray[i++];
        }
        else
        {
            arr[index++] = rightArray[j++];
        }
    }

    // coping left remaining array elements
    while (i < leftArrayLength)
    {
        arr[index++] = leftArray[i++];
    }

    // coping right remaining array elements
    while (j < rightArrayLength)
    {
        arr[index++] = rightArray[j++];
    }
}

void mergesort(vector<int> &arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, end);
};

int main()
{
    vector<int> arr = {22, 3, 13, 1, 43, 54, 73, 23, 5, 74, 2, 1, 9};

    cout << "Before sort the array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergesort(arr, 0, arr.size() - 1);
    cout << "After sort the array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
