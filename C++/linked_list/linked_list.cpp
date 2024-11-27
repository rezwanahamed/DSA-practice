#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
    node *head;

public:
    // constructor
    LinkedList()
    {
        head = NULL;
    }

    node *CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    // insert a value at head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);

        if (head == NULL)
        {
            head = a;
        }

        // if head is not null then
        else
        {
            a->next = head;
            head = a;
        }
    }

    // print the linkedlist
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " -> ";
            a = a->next;
        }
        cout << endl;
    }

    // search a distinct value from linkedlist
    void SearchDistinctValue(int value)
    {
        node *a = head;
        int position = -1;
        bool flag = false;

        while (a != NULL)
        {
            position++;
            if (a->data == value)
            {
                cout << "Element found at position: " << position << endl;
                flag = true;
                break;
            }
            a = a->next;
        }
        if (flag == false)
        {
            cout << "Element not found" << endl;
        }
    }

    // search all value from linkedlist
    void SearchAllPossibleOccurrence(int value)
    {
        node *a = head;
        int position = -1;
        bool flag = false;

        while (a != NULL)
        {
            position++;
            if (a->data == value)
            {
                cout << "Element found at position: " << position << endl;
                flag = true;
            }
            a = a->next;
        }
        if (flag == false)
        {
            cout << "Element not found" << endl;
        }
    }
};

int main()
{
    LinkedList l1;
    l1.InsertAtHead(10);
    l1.InsertAtHead(20);
    l1.InsertAtHead(30);
    l1.InsertAtHead(40);
    l1.InsertAtHead(20);
    l1.InsertAtHead(50);

    l1.Traverse();
    l1.SearchDistinctValue(10);
    l1.SearchAllPossibleOccurrence(20);
    return 0;
}
