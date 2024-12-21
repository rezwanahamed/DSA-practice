#include <iostream>
#include <vector>
using namespace std;

void solve(int size, int index, vector<int> num, vector<int> output, vector<vector<int>> &ans)
{
    if (index >= size)
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(size, index + 1, num, output, ans);

    // include
    int element = num[index];
    output.push_back(element);
    solve(size, index + 1, num, output, ans);
}

vector<vector<int>> subset(int size, int index, vector<int> num)
{
    vector<vector<int>> ans;
    vector<int> output;
    solve(size, index, num, output, ans);

    return ans;
}

int main()
{
    vector<int> num = {1, 2, 3};
    int size = num.size();

    vector<vector<int>> result = subset(size, 0, num);
    // print the elements
    for (vector<int> &arr1 : result)
    {
        cout << "[ ";
        for (int element : arr1)
        {
            cout << element<<" ";
        }
        cout << "]";
        cout << endl;
    }

    return 0;
}
