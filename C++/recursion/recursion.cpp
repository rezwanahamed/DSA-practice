#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int temp;
    cout << "Enter the number: ";
    cin >> temp;

    int result = factorial(temp);
    cout << "Factorial of " << temp << " is: " << result << endl;

    return 0;
}
