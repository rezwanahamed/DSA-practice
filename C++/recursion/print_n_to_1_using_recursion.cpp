#include <iostream>
using namespace std;

void reverse_recursion(int start, int end)
{
    if (start < end)
    {
        return;
    }
    else
    {
        cout << start << endl;
        reverse_recursion(start - 1, end);
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverse_recursion(n, 1);

    return 0;
}
