#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// time complexity = O(n+1+n+1) = O(2*n +1) = O(n)
/*
here the complexity n is higher then constent complexity(1) so this is nageageble
and considered as O(n)
*/

// memory complexity O(n)

int main()
{
    int n; // memory complexity -> O(1)
    cout << "Enter the size of the array: ";
    cin >> n;

    // Edge case handling for array size
    if (n <= 0) // O(n) time complexity, memory complexity -> O(n)
    {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    vector<int> a(n);

    // Enter elements in the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) // O(n) time complexity
    {
        cin >> a[i];
    }

    int mini = a[0];
    int maxi = a[0];
    int sum = 0;

    // Operation to calculate max, min, and sum
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum = sum + a[i];
    }

    // Result
    cout << "Maximum element: " << maxi << endl;
    cout << "Minimum element: " << mini << endl;
    cout << "Sum : " << sum << endl;

    return 0;
}
