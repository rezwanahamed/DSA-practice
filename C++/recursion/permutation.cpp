#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int index, int size, string sampleString, vector<bool> use, vector<string> output, vector<vector<string>> &ans)
{
    if (index >= size)
    {
        ans.push_back(output);
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (!use[i])
        {
            use[i] = true;
            string element(1, sampleString[i]);
            output.push_back(element);
            solve(index + 1, size, sampleString, use, output, ans);
            output.pop_back();
            use[i] = false;
        }
    }
}

vector<vector<string>> permutation(string sampleString)
{
    vector<vector<string>> ans;
    vector<string> output;
    vector<bool> use(sampleString.length(), false);

    int size = sampleString.length();
    solve(0, size, sampleString, use, output, ans);

    return ans;
};

int main()
{
    string sampleArray = "abc";

    // print the permutation
    vector<vector<string>> result = permutation(sampleArray);
    for (vector<string> strArray : result)
    {
        cout << "[ ";
        for (string element : strArray)
        {
            cout << element;
        }
        cout << " ]" << endl;
    }

    return 0;
}
