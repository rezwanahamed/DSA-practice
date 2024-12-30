#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end - start)/2;

        while(start<=end){
            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid]>target){
                end = mid-1;
            }

            if(nums[mid]<target){
                start = mid+1;
            }

            mid = start + (end - start)/2;
        }

        return -1;
    }
};

int main() {
    Solution obj1;
    vector<int>arr={-1,0,3,5,9,12};
    int result = obj1.search(arr, 9);
    cout<<"result: "<<result; 
    return 0;
}