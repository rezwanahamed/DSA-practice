#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int length = arr.size();
    for (int pass = 0; pass < length; pass++)
    {
        int last = length - 1 - pass;
        for (int i = 0; i < last; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }

        cout << "pass " << pass << " : ";
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> arr = {22, 3, 11, 31, 42, 41, 1, 2, 4};
    bubbleSort(arr);

    return 0;
}
