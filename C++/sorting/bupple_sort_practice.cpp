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

    // bubble sort process start from here
    for (int pass = 0; pass < n; pass++)
    {
        int last = n - 1 - pass;
        for (int i = 0; i < last; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }

        cout << "pass " << pass + 1 << " :" <<" ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
