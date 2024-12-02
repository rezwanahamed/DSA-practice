#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter your array length: ";
    cin >> n;

    vector<int> arr(n);

    // getting element from user
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for position " << i << "->";
        cin >> arr[i];
    }

    // sort the array with selection sort
    for (int i = 0; i < n - 1; i++) // time complexity n^2
    {
        int smallestIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }

    cout << "Array after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
