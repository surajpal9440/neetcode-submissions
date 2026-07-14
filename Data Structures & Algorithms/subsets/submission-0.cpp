class Solution {
public:
     
      void helper(int index,vector<int>curr,vector<vector<int>>& ans,vector<int>& nums){
        if(index==nums.size()){
            ans.push_back(curr);
            return;
        }

         curr.push_back(nums[index]);
         helper(index+1,curr,ans,nums);
         curr.pop_back();
         helper(index+1,curr,ans,nums);
         return;
      }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        vector<vector<int>>ans;
        helper(0,curr,ans,nums);

        return ans;
    }
};
