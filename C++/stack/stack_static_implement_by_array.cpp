#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Mystack
{
    int arr[20];
    int size;

public:
    Mystack()
    {
        size = 0;
    }

    // stack push
    void push(int element)
    {
        if (size == 20)
        {
            cout << "Stack is full " << endl;
            return;
        }

        arr[size++] = element;
    }

    // stack pop
    void pop()
    {
        if (size == 0)
        {
            cout << "Stack is empty " << endl;
            return;
        }
        arr[size--] = 0;
    }

    void seek()
    {
        cout << "The top element is : " << arr[size - 1] << endl;
    }
};

int main()
{
    Mystack obj1;
    obj1.push(2);
    obj1.push(11);
    obj1.push(33);
    obj1.seek();

    obj1.pop();
    obj1.seek();
    obj1.pop();
    obj1.pop();
    obj1.pop();

    return 0;
}
