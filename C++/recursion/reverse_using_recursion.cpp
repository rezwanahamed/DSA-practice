#include <iostream>
using namespace std;

void reverse_recursion_small_to_large(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        reverse_recursion_small_to_large(n - 1);
        cout << n << endl;
    }
};

void reverse_recursion_large_to_small(int i, int n)
{
    if (i > n)

        return;

    reverse_recursion_large_to_small(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    reverse_recursion_small_to_large(n);
    cout << endl;
    cout << "Reverse recursion large to small";
    reverse_recursion_large_to_small(1, n);
    return 0;
}
