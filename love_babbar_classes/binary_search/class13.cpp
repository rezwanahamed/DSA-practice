// search element of left most occurrence and right mont occurrence

#include <iostream>
#include <vector>
using namespace std;

int leftMostOccurrence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end - start) / 2;
    int leftOccurrence = -1;

    while (start <= end)
    {
        if (arr[mid] == target) // main part of the code
        {
            leftOccurrence = mid;
            end = mid - 1;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }

        if (arr[mid] > target)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return leftOccurrence;
}

int rightMostOccurrence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid = start + (end - start) / 2;
    int rightOccurrence = -1;

    while (start <= end)
    {
        if (arr[mid] == target) // main part of the code
        {
            rightOccurrence = mid;
            start = mid + 1;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }

        if (arr[mid] > target)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return rightOccurrence;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    int left = leftMostOccurrence(arr, 2);
    cout << "left occurrence: " << left << endl;

    cout << endl;

    int right = rightMostOccurrence(arr, 2);
    cout << "right occurrence: " << right << endl;

    int totalNumberOfOccurrence = (right - left) + 1;
    cout << "Total number of occurrence: " << totalNumberOfOccurrence << endl;

    return 0;
}
