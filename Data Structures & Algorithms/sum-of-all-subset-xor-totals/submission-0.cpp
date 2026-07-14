class Solution {
public:
    int solve (vector<int>&nums ,int i,int xr){
        if(i==nums.size())
          return xr;

        int include=solve(nums,i+1,xr^nums[i]);
        int exclude=solve(nums,i+1,xr);

        return include+exclude;  
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums,0,0);
    }
};