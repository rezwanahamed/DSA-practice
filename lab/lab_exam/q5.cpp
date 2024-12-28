//write a c++ program to perform addition of two complex number of constructor overloading
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    // Copy constructor (optional)
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    // Function to add two complex numbers
    Complex add(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display a complex number
    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    // Creating complex numbers
    Complex num1(3.5, 4.5); // 3.5 + 4.5i
    Complex num2(1.2, -2.3); // 1.2 - 2.3i

    cout << "First Complex Number: ";
    num1.display();

    cout << "Second Complex Number: ";
    num2.display();

    // Adding the two complex numbers
    Complex result = num1.add(num2);

    // Displaying the result
    cout << "Sum of the Complex Numbers: ";
    result.display();

    return 0;
}
