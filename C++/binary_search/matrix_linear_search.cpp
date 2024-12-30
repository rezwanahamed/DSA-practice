#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == target)
                {
                    return true;
                }
            }
        }

        return false;
    }
};

int main()
{
    Solution obj1;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    bool result = obj1.searchMatrix(matrix, 13);
    cout << result << endl;
    return 0;
}

//[[1,3,5,7]
//[10,11,16,20]
//[23,30,34,60]]