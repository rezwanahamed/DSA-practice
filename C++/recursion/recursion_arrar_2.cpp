#include <iostream>
using namespace std;

int array_sum_recursion(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int sum = array_sum_recursion(arr + 1, n - 1);
        return sum + *arr; // arr[0] --> *arr [its a pointer so we can access the pointer elements by dereferencing the pointer]
    }
};

int main()
{

    int n;
    cout << "Enter array length: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for position" << i << "--> ";
        cin >> arr[i];
    }

    int total = array_sum_recursion(arr, n);
    cout << "Total sum of array element is: " << total << endl;

    return 0;
}
