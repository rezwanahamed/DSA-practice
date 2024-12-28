//c++ program to enter any number and find factorial using constructor
#include <iostream>
using namespace std;

class Factorial {
private:
    int number;
    long long factorial;

public:
    // Constructor to initialize and calculate factorial
    Factorial(int n) {
        number = n;
        factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
    }

    // Function to display the result
    void display() {
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }
};

int main() {
    int num;

    // Input from user
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    // Ensure non-negative number
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Create object and calculate factorial
        Factorial fact(num);
        fact.display();
    }

    return 0;
}
