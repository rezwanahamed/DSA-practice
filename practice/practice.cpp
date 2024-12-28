#include <iostream>
#include <vector>
using namespace std;

void mergesort(vector<int> arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // left branch
    mergesort(arr, start, end);
    // right branch
    mergesort(arr, mid, end);
}

int main()
{
    vector<int> arr = {2, 5, 1, 9, 4, 3, 0};
    int size = arr.size();

    return 0;
}
