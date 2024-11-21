#include <iostream>
using namespace std;

void value_swapper(int a, int b, int *small, int *large)
{
    // method 1
    *large = a > b ? a : b;
    *small = a < b ? a : b;

    // method 2
    // if (a > b)
    // {
    //     *large = a;
    //     *small = b;
    // }
    // else
    // {
    //     *large = b;
    //     *small = a;
    // }
}

int main()
{
    int small, large;
    int a = 222;
    int b = 993;

    value_swapper(a, b, &small, &large);
    cout << "Large number is: " << large << endl;
    cout << "Small number is: " << small << endl;

    return 0;
}
