#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class dynamicStack
{
    int size;
    int capacity;
    int *arr;

public:
    dynamicStack()
    {
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }

    void increaseSize()
    {
        capacity = capacity * 2;
        int *temp = new int[capacity];

        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;
        arr = temp;
    }

    void push(int element)
    {
        if (capacity <= size)
        {
            increaseSize();
        }

        arr[size++] = element;
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "No element found in stack" << endl;
            return;
        }

        arr[size - 1] = 0;
        size--;
    }

    void top()
    {
        if (size == 0)
        {
            cout << "No element found in stack" << endl;
            return;
        }

        cout << "The top element in stack is : " << arr[size - 1] << endl;
    }

    void stackSize()
    {
        if (size == 0)
        {
            cout << "No element found in stack" << endl;
            return;
        }

        cout << "Stack size is : " << size << endl;
    };
};

int main()
{
    dynamicStack obj1;
    obj1.top();
    obj1.push(11);
    obj1.push(44);
    obj1.push(31);
    obj1.pop();
    obj1.top();
    obj1.stackSize();

    return 0;
}
