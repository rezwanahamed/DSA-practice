#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array length ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bubble sort process start here
    for (int pass = 0; pass <= n - 1; pass++)
    {
        int last = n - 1 - pass;

        for (int i = 0; i <= last - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }

        cout << "After pass " << pass << " :";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
                }
        cout << endl;
    }

    return 0;
}
