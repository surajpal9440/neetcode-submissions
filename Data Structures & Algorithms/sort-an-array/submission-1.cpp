class Solution {
public:
    
     void sortarr(vector<int>& nums,int start,int end){
        if(start>=end)
          return;

        int mid=start+(end-start)/2;
         
        sortarr(nums,start,mid);
        sortarr(nums,mid+1,end);
        
        //merge
        int i=start,j=mid+1;
        vector<int>temp;

        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }}
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
           temp.push_back(nums[j]);
            j++;
        }
        
    for(int k=0;k<temp.size();k++){
        nums[start+k]=temp[k];
     }
     }
     
    vector<int> sortArray(vector<int>& nums) {
       int start=0,end=nums.size()-1;
        
        
        sortarr(nums,0,end);
        

        return nums;
    }
    
};