#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *previous;
};

class doubly_linkedList
{
    node *head;
    node *tail;
    int size;

public:
    doubly_linkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    node *createDoublyLinkedlist(int value)
    {
        node *newDoublyLinkedlist = new node;
        newDoublyLinkedlist->data = value;
        newDoublyLinkedlist->next = NULL;
        newDoublyLinkedlist->previous = NULL;
        return newDoublyLinkedlist;
    }

    void insertAtHead(int value)
    {
        node *a = createDoublyLinkedlist(value);
        size++;
        if (head == NULL)
        {
            head = a;
            tail = a;
        }
        else
        {
            head->previous = a;
            a->next = head;
            head = a;
        }
    }

    void printSize()
    {
        cout << "The linklist size is: " << size << endl;
    }

    void print()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << "->";
            a = a->next;
        }
        cout << "NULL" << endl;
    }

    void printreverse()
    {
        node *a = tail;
        while (a != NULL)
        {
            cout << a->data << "->";
            a = a->previous;
        }
        cout << "NULL" << endl;
    }

    node *searchElement(int position)
    {
        if (position < 0 || position >= size)
        {
            cout << "Error: Position out of bounds." << endl;
            return nullptr;
        }

        node *a = head;
        for (int i = 0; i < position; i++)
        {
            a = a->next;
        }
        return a;
    }

    // insert at any index
    void insertAtAnyIndex(int position, int value)
    {
        if (position == 0)
        {
            insertAtHead(value);
        }
        else
        {
            node *a = head;
            int index = 0;
            while (index != position - 1)
            {
                a = a->next;
                index++;
            }

            node *newNode = createDoublyLinkedlist(value);
            newNode->previous = a;
            newNode->next = a->next;

            node *b = a->next;
            b->previous = newNode;
            a->next = newNode;
            size++;
        }

        size++;
    }
};

int main()
{
    doubly_linkedList dl1;
    dl1.insertAtHead(202);
    dl1.insertAtHead(142);
    dl1.insertAtHead(330);
    dl1.insertAtHead(512);

    dl1.print();
    dl1.printSize();

    cout << endl;
    cout << "Pint in reverse" << endl;
    dl1.printreverse();

    cout << endl;
    cout << "After insert new element:" << endl;
    dl1.insertAtAnyIndex(2, 555);
    dl1.print();
    dl1.printSize();

    return 0;
}
