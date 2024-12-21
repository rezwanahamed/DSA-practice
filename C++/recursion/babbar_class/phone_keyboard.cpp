#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// Forward declaration of searchKeysByNumber
vector<string> searchKeysByNumber(int num);

void solve(int index, vector<vector<string>> stringArray, vector<string> output, vector<vector<string>> &ans)
{
    if (index >= stringArray.size()) // base case
    {
        ans.push_back(output);
        return;
    }

    // recursive call
    for (string strArr : stringArray[index])
    {
        output.push_back(strArr);
        solve(index + 1, stringArray, output, ans);
        output.pop_back(); // clear the previous data
    }
}

vector<vector<string>> keys(int index, int size, vector<int> num)
{
    vector<string> output;
    vector<vector<string>> stringArray; // generating 2d string array
    vector<vector<string>> ans;

    for (int i = 0; i < size; i++)
    {
        vector<string> temp = searchKeysByNumber(num[i]);
        stringArray.push_back(temp);
    }

    // call the recursive function
    solve(0, stringArray, output, ans);
    return ans;
};

// hashmap
unordered_map<int, vector<string>> phoneKeyboard;

vector<string> searchKeysByNumber(int num)
{
    auto it = phoneKeyboard.find(num);
    if (it != phoneKeyboard.end())
    {
        return it->second;
    }

    return vector<string>();
}

int main()
{

    // Insert mappings for each number key
    phoneKeyboard[2] = {"a", "b", "c"};
    phoneKeyboard[3] = {"d", "e", "f"};
    phoneKeyboard[4] = {"g", "h", "i"};
    phoneKeyboard[5] = {"j", "k", "l"};
    phoneKeyboard[6] = {"m", "n", "o"};
    phoneKeyboard[7] = {"p", "q", "r", "s"};
    phoneKeyboard[8] = {"t", "u", "v"};
    phoneKeyboard[9] = {"w", "x", "y", "z"};

    // call the function
    vector<int> nums = {2, 9};
    int size = nums.size();

    /*
    1. inside every element has it's own length
    2. check every element length to execute recursive calls and terminate the recursive call
    */
    vector<vector<string>> result = keys(0, size, nums);

    // print the answer
    for (vector<string> innerArray : result)
    {
        cout << "[ ";
        for (string element : innerArray)
        {
            cout << element << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
