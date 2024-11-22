#include <iostream>
using namespace std;

int sum_recursion(int i, int n)
{

    if (i > n)
    {
        return 0;
    }
    else
    {
        int s = sum_recursion(i + 1, n);
        return s + i;
    }
};

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << endl;
    int sum = sum_recursion(1, n);
    cout << sum << endl;

    return 0;
}
