//write a c++ program to find the square and cube of number reade from keyboard. (Demonstrate the concept of inheritance)
#include <iostream>
using namespace std;

// Base class
class Number {
public:
    int num; // Number to be squared and cubed

public:
    // Function to read the number
    void readNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

// Derived class for square
class Square : public Number {
public:
    // Function to calculate square
    int calculateSquare() {
        return num * num;
    }
};

// Derived class for cube
class Cube : public Square {
public:
    // Function to calculate cube
    int calculateCube() {
        return num * num * num;
    }
};

int main() {
    Cube obj; // Creating an object of the Cube class
    obj.readNumber();

    cout << "Square of " << obj.num << " is: " << obj.calculateSquare() << endl;
    cout << "Cube of " << obj.num << " is: " << obj.calculateCube() << endl;

    return 0;
}

