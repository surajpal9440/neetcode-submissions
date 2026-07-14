class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void solve(int i, vector<int>& nums, int target) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        if (i == nums.size() || target < 0) {
            return;
        }

        // Take current element
        path.push_back(nums[i]);
        solve(i, nums, target - nums[i]);   // same index because we can reuse
        path.pop_back();

        // Skip current element
        solve(i + 1, nums, target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        solve(0, nums, target);
        return ans;
    }
};