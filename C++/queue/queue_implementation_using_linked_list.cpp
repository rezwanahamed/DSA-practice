#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;

    node()
    {
        next = NULL;
        previous = NULL;
    }
};

class doubleLinkedList
{
public:
    node *front;
    node *rare;
    int size;

    doubleLinkedList()
    {
        front = NULL;
        rare = NULL;
        size = 0;
    }
    node *createLinkedlist(int data)
    {
        node *temp = new node;
        temp->data = data;
        return temp;
    }

    // push element
    void push(int data)
    {
        node *a = createLinkedlist(data);

        if (front == NULL && rare == NULL) // means first element is inserted
        {
            front = rare = a;
        }
        a->next = front;
        front->previous = a;
        front = a;
        size++;
    }

    void pop()
    {
        if (front == NULL && rare == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        node *temp = rare;
        rare = rare->previous;

        if (rare == NULL) // leading to only one element is exist in the queue
        {
            front = NULL;
        }
        else
        {
            rare->next = NULL;
        }

        delete temp;
        size--;
    }

    void seek()
    {
        if (front == NULL && rare == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Current element is queue is: " << rare->data << endl;
    }
};

int main()
{
    doubleLinkedList obj1;
    obj1.pop();
    obj1.push(22);
    obj1.push(32);
    obj1.push(43);
    obj1.seek();
    obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.pop();
    obj1.push(111);
    obj1.seek();

    return 0;
}
