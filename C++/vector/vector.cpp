#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;

    for (int i = 0; i < 10; i++)
    {
        cout << "Size before push element" << a.size() << endl;
        a.push_back(i);
        cout << "Size after push element" << a.size() << endl;
    }

    // insert element at beginning
    a.insert(a.begin() + 0, 100);

    // insert at 3rd position
    a.insert(a.begin() + 2, 300);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // delete element
    a.erase(a.begin() + 2);
    cout << endl;
    cout << "After delete the element" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // pop vector --> remove elements from last position
    a.pop_back();
    cout << endl;
    cout << "After popping  the element" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // resize vector
    cout << endl;
    cout << "Vector after resize" << endl;

    // initializing new vector
    vector<int> b = {1, 2, 3, 4, 5, 6};

    b.resize(2);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}
