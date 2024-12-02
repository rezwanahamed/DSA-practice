#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array length: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "ENter element for position " << i << " --> ";
        cin >> arr[i];
    }

    // insertion sort process start from here
    for (int i = 0; i < n; i++)
    {
        int index = i;
        while (index >= 1)
        {
            if (arr[index - 1] > arr[index])
            {
                swap(arr[index - 1], arr[index]);
                index--;
            }
            else
            {
                break;
            }
        }

        // cout << "After sorting ";
        cout << "pass " << i + 1 << " :";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << "After sorting ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
