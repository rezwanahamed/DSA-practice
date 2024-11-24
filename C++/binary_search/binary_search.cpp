#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    bool flage = false;

    cout << "Enter array length: ";
    cin >> n;

    vector<int>
        arr(n);

    // enter element in array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for " << i << " position --> ";
        cin >> arr[i];
    }

    // search element array
    cout << endl;
    int low = 0, high = n - 1;
    cout << "Enter your search element: ";
    cin >> k;
    cout << endl;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            cout << "Element " << k << " is found at position " << mid + 1 << endl;
            flage = true;
            break;
        }

        if (arr[mid] > k)
        {
            high = mid - 1;
        }

        if (arr[mid] < k)
        {
            low = mid + 1;
        }
    }
    if (flage == false)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
