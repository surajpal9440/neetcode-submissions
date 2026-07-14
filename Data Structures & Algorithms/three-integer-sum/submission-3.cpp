class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;


    sort(nums.begin(),nums.end());
       
       for(int k=0;k<nums.size();k++){

        if(k>0 && nums[k]==nums[k-1]) 
            continue;

            int left=k+1,right=nums.size()-1;
            while(left<right){
                
            if(nums[left]+nums[right]==-nums[k]){
                ans.push_back({nums[k],nums[left],nums[right]});
                left++,right--;
            
            while(left < right && nums[left] == nums[left-1]) left++;
            while(left < right && nums[right] == nums[right+1]) right--;

            }
            else if(nums[left]+nums[right]<-nums[k]){
                left++;
            }
            else{
                right--;
            }
            }
       } 
       return ans;
    }
};
