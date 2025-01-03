// pyramid problem / largest element in an array
#include <iostream>
#include <vector>
using namespace std;

int pyramidNumber(vector<int> arr)
{
    int start = 0;
    int end = arr.size();

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            return arr[mid];
        }

        if (arr[mid - 1] > arr[mid]) // shift left
        {
            end = mid - 1;
        }

        if (arr[mid + 1] > arr[mid]) // shift right
        {
            start = mid + 1;
        }

        mid = start + (start - end) / 2;
    }

    return -1;
}

int main()
{
    vector<int> pyramidArr = {3, 4, 5, 1};
    int result = pyramidNumber(pyramidArr);
    cout << "Result : " << result << endl;

    return 0;
}
