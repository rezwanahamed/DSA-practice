#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> sampleArray, int size)
{
    if (sampleArray.size() == 1)
    {
        cout << 0 << endl;
        return;
    }

    // create  a hashmap is new elements occurs
    unordered_map<int, int> repeatedTaskCounter;
    for (int i = 0; i < size; i++)
    {
        // first check element exist in the hashmap
        // if exit then increase the element count
        // if not exit then then assign with 1

        int temp = sampleArray[i];
        // elementsRepeatCounterMap[temp]++; // short hand of the bellow code

        if (repeatedTaskCounter.find(temp) != repeatedTaskCounter.end())
        {
            // Element exists
            repeatedTaskCounter[temp]++;
        }
        else
        {
            // Element does not exist
            repeatedTaskCounter[temp] = 1;
        }
    }

    // Count duplicates
    int duplicateTasks = 0;
    for (auto element : repeatedTaskCounter)
    {
        if (element.second > 1)
        {
            duplicateTasks++;
        }
    }

    cout << "Number of tasks: " << duplicateTasks << endl;
}

int main()
{
    int size;

    cout << "Enter the array size: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter array elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    solve(arr, size);

    return 0;
}

// 2
// 1 2

// 4
// 1 2 3 1

// 6
// 1 2 3 1 2 3

// 0
// 1
// 3