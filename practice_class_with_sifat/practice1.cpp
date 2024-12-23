#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void stringToNumberSum(string sampleOutput, int length)
{
    // 1+1+3+1+3
    vector<string> stringArray;
    string temp;
    for (int i = 0; i < length; i++)
    {
        if (sampleOutput[i] == '+') // Changed to single quotes for char
        {
            continue;
        }
        temp = sampleOutput[i]; // Convert char to string
        stringArray.push_back(temp);
    }

    sort(stringArray.begin(), stringArray.end());

    for (int i = 0; i < stringArray.size(); i++)
    {
        cout << stringArray[i];
        if (i < stringArray.size() - 1) // Add plus sign only between numbers
        {
            cout << "+";
        }
    }
}

int main()
{
    string output;
    cout << "Enter your string number: ";
    cin >> output;

    int stringLength = output.length();
    stringToNumberSum(output, stringLength);

    return 0;
}