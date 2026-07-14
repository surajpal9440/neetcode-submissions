class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char,int>mp;
         int l=0,r=0;
          int needed = s1.size();  
        for(char x:s1){
            mp[x]++;
        }

        while(r<s2.size()){
            if(mp.find(s2[r])!=mp.end()){
                if(mp[s2[r]]>0){
                needed--;
                }
            mp[s2[r]]--;
                }
            
                //shrink krenge
               if(r-l+1>s1.length()){
                if(mp.find(s2[l])!=mp.end()){
                    if(mp[s2[l]]>=0){
                        needed++;
                    }  
                    mp[s2[l]]++;
                        
                    }
                    l++;
                }
             if(needed==0)
             return true;
            
    
            r++;
        }
        return false;
        
    }
};
