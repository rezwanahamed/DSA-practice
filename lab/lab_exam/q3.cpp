//write a c++ program to find the greatest of three given numbers in three different class using friend function
#include <iostream>
using namespace std;

class ClassB; // Forward declaration of ClassB
class ClassC; // Forward declaration of ClassC

class ClassA {
private:
    int numA;

public:
    // Constructor to initialize numA
    ClassA(int val) : numA(val) {}

    // Declare the friend function
    friend int findGreatest(ClassA a, ClassB b, ClassC c);
};

class ClassB {
private:
    int numB;

public:
    // Constructor to initialize numB
    ClassB(int val) : numB(val) {}

    // Declare the friend function
    friend int findGreatest(ClassA a, ClassB b, ClassC c);
};

class ClassC {
private:
    int numC;

public:
    // Constructor to initialize numC
    ClassC(int val) : numC(val) {}

    // Declare the friend function
    friend int findGreatest(ClassA a, ClassB b, ClassC c);
};

// Friend function definition
int findGreatest(ClassA a, ClassB b, ClassC c) {
    if (a.numA >= b.numB && a.numA >= c.numC) {
        return a.numA;
    } else if (b.numB >= a.numA && b.numB >= c.numC) {
        return b.numB;
    } else {
        return c.numC;
    }
}

int main() {
    // Create objects of ClassA, ClassB, and ClassC
    ClassA objA(25);
    ClassB objB(42);
    ClassC objC(17);

    // Find the greatest number
    int greatest = findGreatest(objA, objB, objC);

    // Display the result
    cout << "The greatest number is: " << greatest << endl;

    return 0;
}

