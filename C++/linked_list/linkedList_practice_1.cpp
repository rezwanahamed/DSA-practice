#include <iostream>
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
    int size;

public:
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    ~LinkedList()
    {
        node *temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    node *createLinkList(int value)
    {
        node *a = new node;
        a->data = value;
        a->next = NULL;
        return a;
    }

    // insert at head
    void insertAtHead(int value)
    {
        node *temp = createLinkList(value);
        size++;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void insertAtTail(int value)
    {
        node *temp = createLinkList(value);
        size++;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *a = head;
            while (a->next != NULL)
            {
                a = a->next;
            }
            a->next = temp;
        }
    }

    void insertAtAnyPosition(int position, int value)
    {
        if (position < 0 || position > size)
        {
            cout << "Out of boundary limit" << endl;
            return;
        }

        if (position == 0)
        {
            insertAtHead(value);
            return;
        }

        if (position == size)
        {
            insertAtTail(value);
            return;
        }

        // insert at any position
        node *temp = createLinkList(value);

        // 1. get the previous position
        node *previousNode = searchElementByPosition(position - 1);

        // 2.get the next position
        node *currentNode = searchElementByPosition(position);

        // replace node position
        previousNode->next = temp;
        temp->next = currentNode;
    };

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    node *searchElementByPosition(int position)
    {
        if (position < 0 || position >= size)
        {
            cout << "Out of boundary limit" << endl;
            return NULL;
        }

        int i = 0;
        node *temp = head;

        while (i < position)
        {
            temp = temp->next;
            i++;
        }
        return temp;
    }

    void searchElement(int value)
    {
        node *temp = head;
        int position = -1;
        bool flag = false;
        while (temp != NULL)
        {
            position++;
            if (temp->data == value)
            {
                flag = true;
                cout << "Position: " << position << endl;
                break;
            }
            temp = temp->next;
        }
        if (!flag)
        {
            cout << "Element not found" << endl;
        }
    }

    void searchAllPossibleMatches(int value)
    {
        node *temp = head;
        int position = -1;
        bool flag = false;
        while (temp != NULL)
        {
            position++;
            if (temp->data == value)
            {
                flag = true;
                cout << "Position: " << position << endl;
            }
            temp = temp->next;
        }
        if (!flag)
        {
            cout << "Element not found" << endl;
        }
    }

    void getSize()
    {
        cout << "The linked list length is: " << size << endl;
    }

    // delete element from head
    void deleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        size--;
        node *a = head;
        head = a->next;
        delete a;
    }

    // delete at any position
    void deleteAtAnyPosition(int position)
    {
        if (position < 0)
        {
            cout << "Out of boundary limit" << endl;
            return;
        }

        // 1. get the previous position
        node *previousNode = searchElementByPosition(position - 1);

        // 2.get the next position
        node *nextNode = searchElementByPosition(position + 1);

        // 3. current element
        node *currentNode = searchElementByPosition(position);

        previousNode->next = nextNode;
        delete currentNode;
        size--;
    }

    // get head
    node *getHead()
    {
        return head;
    }

    // recursive print linkedlist
    void recursivePrint(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        // recursivePrint(a->next); // print reverse
        cout << a->data << "->";
        recursivePrint(a->next); // print forward
    }
};

int main()
{
    LinkedList l1;
    l1.insertAtHead(10);
    l1.insertAtHead(20);
    l1.insertAtHead(30);
    l1.insertAtHead(20);
    l1.insertAtHead(40);
    l1.insertAtHead(30);
    l1.insertAtHead(50);

    l1.print();
    l1.searchElement(20);
    l1.searchAllPossibleMatches(20);
    l1.insertAtAnyPosition(4, 110);
    l1.getSize();
    l1.print();

    l1.deleteAtHead();
    l1.getSize();
    l1.print();

    l1.deleteAtAnyPosition(1);
    l1.getSize();

    l1.insertAtHead(220);
    l1.print();

    cout << endl;
    cout << "Recursively print linkedlist" << endl;
    l1.recursivePrint(l1.getHead());
    cout << endl;

    return 0;
}
