#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

int exponential(int n)
{
    if (n < 0) {
        throw invalid_argument("Input must be non-negative");
    }
    
    if (n == 0) {
        return 1;
    }

    return 2 * pow(2, exponential(n - 1));
}

int main()
{
    int n;
    cout << "Enter a non-negative number: ";
    cin >> n;

    try {
        long long result = exponential(n);
        cout << "The exponential of " << n << " is: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}