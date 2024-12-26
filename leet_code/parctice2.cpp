#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        /*
        1. marge 2 arrays
        2. sort the arrays
        3. calculate the mid of the array
        4. if the size of the array is odd then return the mid of the array
        5. if the size of the array is even then return (mid + mid+1)/2
        */
        vector<int> temp;
        int num1Size = nums1.size();
        int num2Size = nums2.size();
        int totalArraySize = num1Size + num2Size;

        for (int i = 0; i < totalArraySize; i++)
        {
            if (i < num1Size)
            {
                temp.push_back(nums1[i]);
            }
            if (i < num2Size)
            {
                temp.push_back(nums2[i]);
            }
        }

        sort(temp.begin(), temp.end()); // sort the array

        if (totalArraySize % 2 != 0)
        { // for odd array length
            int mid = (0 + totalArraySize - 1) / 2;
            return temp[mid];
        }

        // for even array length
        int mid = totalArraySize / 2 - 1;
        int nextMidPosition = totalArraySize / 2;
        double result = (double)(temp[mid] + temp[nextMidPosition]) / 2;
        return result;
    }
};

int main()
{
    vector<int> arr1 = {1, 2};
    vector<int> arr2 = {3, 4};

    Solution obj1;
    double result = obj1.findMedianSortedArrays(arr1, arr2);
    cout << result << endl;

    return 0;
}
