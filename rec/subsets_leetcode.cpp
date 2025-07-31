#include <iostream>
#include <vector>

using namespace std;

void solveSubsts(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    
    // exclude
    solveSubsts(nums, output, index + 1, ans);
    
    // include
    int element = nums[index];
    output.push_back(element);
    solveSubsts(nums, output, index + 1, ans);
    output.pop_back(); // backtrack: remove the last element to try the next possibility
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solveSubsts(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    // Print all subsets
    for (auto& subset : result)
    {
        cout << "[";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
