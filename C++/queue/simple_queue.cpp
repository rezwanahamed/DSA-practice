#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rare;
    int n = 2;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        rare = -1;
    }

    // insert item in queue
    void push(int element)
    {
        if (rare == n)
        {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1)
        {
            front++;
        }

        arr[++rare] = element;
    }

    void pop()
    {
        if (front == -1 || front > rare)
        {
            cout << "queue is empty" << endl;
            return;
        }

        front++;
    }

    void peek()
    {
        if (front == -1 || front > rare)
        {
            cout << "queue is empty" << endl;
            return;
        }

        cout << "Element at the front is :" << arr[front] << endl;
    }
};

int main()
{
    Queue obj1;
    obj1.peek();
    obj1.pop();
    obj1.push(22);
    obj1.push(32);
    obj1.push(53);
    // obj1.push(54);
    obj1.peek();
    // obj1.pop();
    // obj1.pop();
    // obj1.pop();
    obj1.peek();

    return 0;
}
