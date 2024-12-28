#include <iostream>
#include <limits.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int num = x;
        long long reverse = 0;

        while (num != 0) // for positive number
        {
            int digit = num % 10;

            if (reverse * 10 + digit > INT_MAX || reverse * 10 + digit < INT_MIN)
            {
                return 0;
            }
            reverse = reverse * 10 + digit;
            num = num / 10;
        }
        return reverse;
    }
};

int main()
{
    Solution obj1;
    int result = obj1.reverse(-1534236469);

    cout << result << endl;
    return 0;
}
