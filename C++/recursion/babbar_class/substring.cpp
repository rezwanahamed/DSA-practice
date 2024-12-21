#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int size, int index, vector<string> strArray, vector<string> output, vector<vector<string>> &ans)
{
    if (index >= size)
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(size, index + 1, strArray, output, ans);

    // include
    string element = strArray[index];
    output.push_back(element);
    solve(size, index + 1, strArray, output, ans);
}

vector<vector<string>> substring(int size, int index, vector<string> strArray)
{
    vector<vector<string>> ans;
    vector<string> output;
    solve(size, index, strArray, output, ans);
    return ans;
}

int main()
{
    vector<string> strArray = {"a", "b", "c"};
    int size = strArray.size();
    vector<vector<string>> result = substring(size, 0, strArray);

    // print the result
    for (vector<string> strArr : result)
    {
        cout << "[ ";
        for (string element : strArr)
        {
            cout << element << " ";
        }
        cout << "] ";
        cout << endl;
    }

    return 0;
}
