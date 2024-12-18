#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
    void debugPrint(const vector<int>& nums, const vector<int>& output, int index, const vector<vector<int>>& ans) {
        cout << "Current Call:" << endl;
        cout << "  Current Index: " << index << endl;
        
        // Print current output (current subset being built)
        cout << "  Current Output: [ ";
        for (int num : output) {
            cout << num << " ";
        }
        cout << "]" << endl;
        
        // Print current ans vector
        cout << "  Current ans Vector:" << endl;
        for (const auto& subset : ans) {
            cout << "    [ ";
            for (int num : subset) {
                cout << num << " ";
            }
            cout << "]" << endl;
        }
        cout << "-------------------" << endl;
    }

    void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        // Base case: reached end of array
        if (index >= nums.size()) {
            // Add current output (subset) to answer vector
            ans.push_back(output);
            
            // Debug print to show vector population
            debugPrint(nums, output, index, ans);
            return;
        }

        // Scenario 1: Exclude current element
        solve(nums, output, index + 1, ans);

        // Scenario 2: Include current element
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);

        // Backtrack: remove last added element to explore other combinations
        if (!output.empty()) {
            output.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, 0, ans);
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3};
    Solution sol;
    vector<vector<int>> result = sol.subsets(nums);

    // Print final result
    cout << "Final Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}