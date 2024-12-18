#include <iostream>
#include <bits/stdc++.h>
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

    int element = num[index];
    output.push_back(element);
  
    // include
    solve(size, index + 1, num, output, ans);
}

vector<vector<int>> subset(int index, int size, vector<int> &num)
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
    vector<vector<int>> result = subset(0, size, num);

    // Print all subsets
    cout << "All subsets:" << endl;
    for (const auto &subset : result)
    {
        // Print subset
        cout << "[ ";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
