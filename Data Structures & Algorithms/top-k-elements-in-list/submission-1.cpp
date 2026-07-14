class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int x:nums){
        
            mp[x]++;
        }
        
        for(auto &p : mp){
            q.push({p.second,p.first});    //{freq ,value} aise krenge  kyuki pq pehle column ko sort krti hai
            // and apne ko freq sort chahiye isiliye p.sec ko pehle likha
        }

        for(int i=0;i<k;i++){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
