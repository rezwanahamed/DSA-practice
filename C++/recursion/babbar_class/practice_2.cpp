// #include <iostream>
// using namespace std;

// void numberGames(int n)
// {
//     if (n == 0) // base case
//     {
//         return;
//     }

//     int temp = (n % 10); // give last digit
//     // int removeFloat = temp / 10;

//     numberGames(n / 10);

//     switch (temp) // print the number into text
//     {
//     case 1:
//         cout << "One" << endl;
//         break;
//     case 2:
//         cout << "Two" << endl;
//         break;
//     case 3:
//         cout << "Three" << endl;
//         break;
//     case 4:
//         cout << "Four" << endl;
//         break;
//     case 5:
//         cout << "Five" << endl;
//         break;
//     case 6:
//         cout << "Six" << endl;
//         break;
//     case 7:
//         cout << "Seven" << endl;
//         break;
//     case 8:
//         cout << "Eight" << endl;
//         break;
//     case 9:
//         cout << "Nine" << endl;
//         break;
//     case 10:
//         cout << "Ten" << endl;
//         break;

//     default:
//         break;
//     }
// }

// int main()
// {
//     numberGames(42343);

//     return 0;
// }

// babbar vhai approch
#include <iostream>
using namespace std;

void printSpell(int n, string stringArr[])
{
    if (n == 0)
    {
        return;
    }

    printSpell(n / 10, stringArr);
    cout << stringArr[n % 10] << endl;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    string stringArray[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "none"};
    printSpell(n, stringArray);

    return 0;
}
