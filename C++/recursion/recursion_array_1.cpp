#include <iostream>
using namespace std;

int sum_array_recursion(int arr[], int i, int n)
{
    if (i == n)
    {
        return 0;
    }
    else
    {
        int sum = sum_array_recursion(arr, i + 1, n);
        return sum + arr[i];
    }
}

int main()
{
    int n;

    cout << "Enter allay length: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for position " << i << "-->";
        cin >> arr[i];
    }

    cout << "The sum of the array: " << sum_array_recursion(arr, 0, n)<<endl;

    return 0;
}
