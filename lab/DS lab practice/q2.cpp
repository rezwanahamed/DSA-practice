#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int target)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            start = mid + 1;
        }

        if (arr[mid] > target)
        {
            end = mid - 1;
        }

        mid = start + (end - start);
    }

    return mid;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int target = 4;
    int length = arr.size();
    int result = binarySearch(arr, 0, length - 1, target);
    cout << result << endl;
    return 0;
}
