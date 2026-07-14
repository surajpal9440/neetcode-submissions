class Solution {
public:

        vector<vector<int>>ans;
        void helper(vector<int>&nums,vector<int>&path,vector<int>&visited){
            if(path.size()==nums.size()){
                ans.push_back(path);
                return;
            }
            //take
            for(int i=0;i<nums.size();i++){
                if(visited[i])
                continue;

                path.push_back(nums[i]);
                visited[i]=1;
                //explore
                helper(nums,path,visited);
                //drop
                path.pop_back();
                visited[i]=0;
            }
        }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>path;
        vector<int>visited(nums.size(),0);
        helper(nums,path,visited);
        return ans;
    }
};
