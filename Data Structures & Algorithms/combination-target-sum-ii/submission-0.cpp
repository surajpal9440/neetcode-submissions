class Solution {
public:
    
    void solve(int index, vector<int>& arr, int target, 
               vector<int>& temp, vector<vector<int>>& ans) {
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        
        for(int i = index; i < arr.size(); i++){
            
            // skip duplicates
            if(i > index && arr[i] == arr[i-1]) continue;
            
            // if element greater than target → stop
            if(arr[i] > target) break;
            
            temp.push_back(arr[i]);
            
            // move to next index (i+1 because only once use)
            solve(i+1, arr, target - arr[i], temp, ans);
            
            temp.pop_back(); // backtrack
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(0, candidates, target, temp, ans);
        
        return ans;
    }
};