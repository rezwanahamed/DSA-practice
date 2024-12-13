#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    bool flage = false;

    cout << "Enter the length :";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for position " << i << "->";
        cin >> arr[i];
    }

    cout << "Enter targeted element : ";
    cin >> target;

    // binary search implementation
    int start = 0, end = n;
    while (start < end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            cout << "Element found at position : " << mid << endl;
            flage = true;
            break;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }

        if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }

    if (flage == false)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
