#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int* arr;
    int capacity;
    int size;

public:
    // Constructor
    ArrayOperations(int cap) {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
    }

    // Insert element at a specific position
    bool insertAt(int element, int position) {
        // Check if array is full or position is invalid
        if (size >= capacity || position < 0 || position > size) {
            return false;
        }

        // Shift elements to right to make space
        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert element and increase size
        arr[position] = element;
        size++;
        return true;
    }

    // Delete element from a specific position
    bool deleteAt(int position) {
        // Check if position is valid
        if (position < 0 || position >= size) {
            return false;
        }

        // Shift elements to left to fill the gap
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease size
        size--;
        return true;
    }

    // Print array
    void display() {
        if (size == 0) {
            cout << "Array is empty" << endl;
            return;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~ArrayOperations() {
        delete[] arr;
    }
};

// Main function to demonstrate usage
int main() {
    ArrayOperations arr(5);  // Create array with capacity 5

    // Insert elements
    arr.insertAt(10, 0);  // Insert 10 at position 0
    arr.insertAt(20, 1);  // Insert 20 at position 1
    arr.insertAt(30, 2);  // Insert 30 at position 2
    
    cout << "After inserting elements:" << endl;
    arr.display();

    // Delete element
    arr.deleteAt(1);  // Delete element at position 1
    
    cout << "After deleting element at position 1:" << endl;
    arr.display();

    return 0;
}