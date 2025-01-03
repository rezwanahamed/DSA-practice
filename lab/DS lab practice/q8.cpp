#include <iostream>
using namespace std;

class DynamicArray
{
    int size;
    int capacity;
    int *arr;

public:
    DynamicArray()
    {
        size = 0;
        arr = new int[capacity];
    }

    void insertElement(int element)
    {
        arr[size] = element;
        size++;
    }

    void insertAtAnyPositionElement(int element, int position)
    {
        if (size <= position)
        {
            cout << "Limit exit" << endl;
            return;
        }
        arr[position] = element;
    }

    void deleteElement(int position)
    {
        if (size <= 0)
        {
            cout << "Array is empty" << endl;
        }

        if (size <= position)
        {
            cout << "Limit exit" << endl;
            return;
        }
        for (int i = position; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    DynamicArray obj1;
    obj1.insertElement(22);
    obj1.insertElement(45);
    obj1.insertElement(32);
    obj1.insertElement(76);

    cout << "Before insert at position" << endl;
    obj1.display();

    cout << "Insert at any position" << endl;
    obj1.insertAtAnyPositionElement(909, 20);
    obj1.display();

    cout << "Delete element" << endl;
    obj1.deleteElement(10);
    obj1.display();
}
