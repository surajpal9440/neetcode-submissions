class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  n=nums.size()-1;
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};