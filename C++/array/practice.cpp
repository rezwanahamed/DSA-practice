#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    // allocate dynamic array
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element for " << i + 1 << " position --> ";
        cin >> ptr[i];
    }

    cout << endl;

    // display the array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Element of position " << i + 1 << " is --> " << ptr[i] << endl;
    }

    // clear memory after iteration
    free(ptr);

    return 0;
}
