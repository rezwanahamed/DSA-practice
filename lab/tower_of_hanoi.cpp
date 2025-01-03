#include <iostream>
using namespace std;

void towerOfHanoi(int n, string source, string helper, string destination)
{
    if (n == 1)
    {
        cout << "Transfer dist " << n << " from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, helper);
    cout << "Transfer dist " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
    int n = 4;
    towerOfHanoi(n, "S", "H", "D");

    return 0;
}