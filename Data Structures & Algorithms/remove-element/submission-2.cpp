class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int i = 0;
        int n = nums.size();

        while(i < n){

            if(nums[i] == val){
                swap(nums[i], nums[n-1]);
                n--;              // reduce array size
            }
            else{
                i++;              // move forward if element is valid
            }

        }

        return n;
    }
};