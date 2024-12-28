//write a c++ program to swap two number declare in two different class using friend function
#include <iostream>
using namespace std;

class ClassB; // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    // Constructor to initialize valueA
    ClassA(int val) : valueA(val) {}

    // Declare the friend function
    friend void swapValues(ClassA &a, ClassB &b);

    // Function to display valueA
    void display() {
        cout << "Value in ClassA: " << valueA << endl;
    }
};

class ClassB {
private:
    int valueB;

public:
    // Constructor to initialize valueB
    ClassB(int val) : valueB(val) {}

    // Declare the friend function
    friend void swapValues(ClassA &a, ClassB &b);

    // Function to display valueB
    void display() {
        cout << "Value in ClassB: " << valueB << endl;
    }
};

// Friend function definition
void swapValues(ClassA &a, ClassB &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    // Create objects of ClassA and ClassB
    ClassA objA(10);
    ClassB objB(20);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    // Swap values using the friend function
    swapValues(objA, objB);

    cout << "\nAfter swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}
