#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int column = matrix[0].size();

        int start = 0;
        int end = row * column - 1;
        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            int row = mid / column; // row position
            int col = mid % column; // column position

            if (matrix[row][col] == target)
            {
                return true;
            }

            if (matrix[row][col] < target)
            {
                start = mid + 1;
            }

            if (matrix[row][col] > target)
            {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return false;
    }
};

int main()
{
    Solution obj1;
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    bool result = obj1.searchMatrix(matrix, 3);
    cout << result << endl;
    return 0;
}

//[[1,3,5,7]
//[10,11,16,20]
//[23,30,34,60]]