#include <iostream>
using namespace std;

class Solution
{
    int num;

public:
    int factorial(int num)
    {
        if (num <= 0)
        {
            return 1;
        }

        int result = num * factorial(num - 1);
        cout << result << endl;
        return result;
    }
};

int main()
{
    Solution obj1;
    int result = obj1.factorial(5);
    cout << "Factorial of 5 is : " << result << endl;

    return 0;
}
//complexity of the code is O(n)