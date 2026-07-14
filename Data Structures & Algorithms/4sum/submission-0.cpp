class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int start = 0; start < nums.size()-3; start++){

            if(start > 0 && nums[start] == nums[start-1]) 
                continue;

            for(int mid1 = start + 1; mid1 < nums.size()-2; mid1++){

                if(mid1 > start+1 && nums[mid1] == nums[mid1-1]) 
                    continue;

                int mid2 = mid1 + 1;
                int end = nums.size() - 1;

                while(mid2 < end){

                    long long sum = (long long)nums[start] + nums[mid1] + nums[mid2] + nums[end];

                    if(sum == target){
                        ans.push_back({nums[start], nums[mid1], nums[mid2], nums[end]});

                        mid2++;
                        end--;

                        while(mid2 < end && nums[mid2] == nums[mid2-1]) mid2++;
                        while(mid2 < end && nums[end] == nums[end+1]) end--;
                    }
                    else if(sum < target){
                        mid2++;
                    }
                    else{
                        end--;
                    }

                }
            }
        }

        return ans;
    }
};