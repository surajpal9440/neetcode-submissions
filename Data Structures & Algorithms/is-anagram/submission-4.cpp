class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.size()!=t.size())
         return false;

       for(char x:s){
         mp[x]++;
       }
       for(char i =0;i<t.size();i++){
         if(mp.find(t[i])==mp.end()){
            return false;
         }
         mp[t[i]]--;
         if(mp[t[i]]<0)
          return false;
       }
       return true;
    }
};
