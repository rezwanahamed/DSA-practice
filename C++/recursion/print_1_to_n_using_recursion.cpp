#include <iostream>
using namespace std;

void print_recursive(int current, int range)
{
    if (current > range)
        return;

    cout << current << endl;
    print_recursive(current + 1, range);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    print_recursive(1, n);

    return 0;
}
