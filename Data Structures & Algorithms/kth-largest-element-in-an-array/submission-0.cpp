class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;

        for(int x:nums){
            q.push(x);
        }

        int ans=0;
        while(k--){
            ans=q.top();
            q.pop();
        }
        return ans;
    }
};
