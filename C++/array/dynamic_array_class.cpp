#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *arr;
    int capacity, size;
    void increase_size()
    {
        capacity = capacity * 2;

        // creating a new array
        int *temp = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            temp[i] = arr[i];
        }

        // releasing memory
        delete[] arr;
        arr = temp;
    };

public:
    Array()
    {
        arr = new int[1];
        capacity = 1;
        size = 0; // array available position
    }

    void insert(int element)
    {
        // array is full then the function will call to increase the array size
        if (capacity == size)
        {
            increase_size();
        }
        arr[size] = element;
        size++;
    }

    void display()
    {
        cout << "[";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            if (i == size - 1)
            {
                break;
            }
            cout << ", ";
        }
        cout << "]" << endl;
    }

    void array_size()
    {
        cout << "Array size is :" << size << endl;
    }

    void get_element(int index)
    {
        if (index >= size)
        {
            cout << "Error exit boundary" << endl;
        }
        else
        {
            cout << "The element at index " << index << " --> " << arr[index] << endl;
        }
    }

    // insert element
    void insert_element(int position, int element)
    {
        if (capacity == size)
        {
            increase_size();
        }
        for (int i = size; i >= position; i--)
        {
            arr[i + 1] = arr[i];
        }

        // insert element in the array at the mentioned position after element shifting right
        arr[position] = element;
        size++;
    }

    // delete element
    void pop()
    {
        if (size == 0)
        {
            cout << "Array is empty" << endl;
        }
        size--;
    }

    void erase(int position)
    {
        if (position >= size)
        {
            cout << "Error exit boundary" << endl;
            ;
        }

        for (int i = position + 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }
        size--;
    }
};

int main()
{
    Array obj1;
    obj1.insert(22);
    obj1.insert(54);
    obj1.insert(68);
    obj1.insert(99);

    obj1.display();
    obj1.array_size();

    cout << "Element after insertion" << endl;
    obj1.insert_element(1, 111);
    obj1.display();
    obj1.get_element(4);

    cout << "Element after pop" << endl;
    obj1.pop();
    obj1.display();

    cout << "Element after erase" << endl;
    obj1.erase(1);
    obj1.display();

    return 0;
}
