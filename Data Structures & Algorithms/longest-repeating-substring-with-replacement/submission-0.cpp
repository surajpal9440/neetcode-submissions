class Solution {
public:
    int characterReplacement(string s, int k) {
            unordered_map<int,int>mp;      
                                           //maxfreq of particular element
            int left=0,right=0,maxwindow=0,maxfreq=0; 

            while(right<s.size()){

                mp[s[right]]++;
                maxfreq=max(maxfreq,mp[s[right]]);
                    //window size
                while((right-left+1)-maxfreq>k){
                    mp[s[left]]--;
                    left++;
                }

                maxwindow = max(maxwindow,right-left+1);
                right++;
            }
            return maxwindow;
    }
};
