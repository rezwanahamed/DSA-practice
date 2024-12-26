#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int vectorSize = nums.size();
        vector<int> temp;

        for (int i = 0; i < vectorSize - 1; i++)
        {
            for (int j = i+1; j < vectorSize; j++)
            {
                int sum = nums[i] + nums[j];

                if (sum == target)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);

                    return temp;
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution obj1;
    vector<int> arr = {3,2,4};
    vector<int> result = obj1.twoSum(arr, 6);

    for (int element : result)
    {
        cout << element << ", ";
    }

    return 0;
}
