class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);

        //left
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        //right
        int max=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=ans[i]*max;
            max*=nums[i];
        }
        return ans;
    }
};
