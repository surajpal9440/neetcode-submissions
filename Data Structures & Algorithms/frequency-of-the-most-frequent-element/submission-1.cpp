class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int l=0,costsum=0,sum=0,maxfreq=0;
        sort(nums.begin(),nums.end());
       
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            // cost to make all numbers equal to nums[r]
            long long costsum=nums[r]*(r-l+1)-sum;
            while(costsum>k){
            sum-=nums[l];
            l++;
        
        costsum=nums[r]*(r-l+1)-sum;
    }

    maxfreq=max(maxfreq, r - l + 1);
 }
return maxfreq;
}
};