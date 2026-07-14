class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int>st;
            int length=0;
         for(int x:nums){
            st.insert(x);
         }
             
         for(int i=0;i<nums.size();i++){
             
            if(st.find(nums[i]-1)==st.end()){
                int current = nums[i];
                int count = 1;

                // expand the sequence
                while(st.find(current + 1) != st.end()){
                    current++;
                    count++;
                }

                length = max(length, count);
                
            }
            
                
         }   
         return length;
    }
};
