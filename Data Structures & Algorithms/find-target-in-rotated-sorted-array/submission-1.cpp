class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;

        while(start<=end){
            
            int mid= start+(end-start)/2;

            if(nums[mid]==target){
                return mid;

            }
            if(nums[start]<=nums[mid]){  //left side sorted hai and usme check krenge
                if(target>=nums[start] && target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            else{
                if(target>nums[mid] && target<=nums[end]){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
            }
            
        }
        return -1;
    }
};
