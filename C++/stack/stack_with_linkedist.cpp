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
        data = 0;
        next = NULL;
        previous = NULL;
    }
};

class doublyLinkedlist
{
    node *head;
    node *tail;
    int size;

public:
    doublyLinkedlist()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    node *createDoublyLinkedlist(int data)
    {
        node *obj1 = new node;
        obj1->data = data;
        return obj1;
    }

    void push(int data)
    {
        node *a = createDoublyLinkedlist(data);

        if (head == NULL)
        {
            head = tail = a;
            size++;
            return;
        }

        a->next = head;
        head->previous = a;
        head = a;
        size++;
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        node *temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->previous = NULL;
        }
        else
        {
            // If the list becomes empty after popping
            tail = NULL;
        }

        delete temp;
        size--;
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int stackSize()
    {
        return size;
    }

    int top()
    {
        return head->data;
    }
};

int main()
{
    doublyLinkedlist obj1;
    obj1.pop();
    obj1.push(33);
    obj1.push(45);
    obj1.push(52);
    obj1.push(98);
    obj1.pop();
    obj1.print();
    obj1.stackSize();

    doublyLinkedlist obj2;
    while (obj1.stackSize() > 0)
    {
        obj2.push(obj1.top());
        obj1.pop();
    }
    cout << "2nd object" << endl;
    obj2.print();

    return 0;
}