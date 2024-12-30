#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int temp = x;
        int reverse = 0;

        while (temp != 0)
        {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if (reverse == x && reverse > 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution obj1;
    bool result = obj1.isPalindrome(-421);
    cout << result << endl;

    return 0;
}
