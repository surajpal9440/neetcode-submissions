class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int r=0;
        while(r<nums.size()){
            if(mp.find(nums[r])!=mp.end()){
                int length=r-mp[nums[r]];
                if(length<=k)
                  return true;
            }
            mp[nums[r]]=r;
            r++;
        }
        return false;
    }
};