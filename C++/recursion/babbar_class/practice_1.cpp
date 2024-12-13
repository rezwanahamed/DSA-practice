#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void recursiveCall(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " " << endl;
    recursiveCall(n - 1);
    // cout << n << " " << endl;
};

int main()
{
    int n = 5;
    recursiveCall(n);

    return 0;
}
