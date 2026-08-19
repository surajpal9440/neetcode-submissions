class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l=0
        r=0
        st=set()
        maxlen=0

        while r<len(s):

            while s[r] in st:
                st.remove(s[l])
                l+=1
            
            st.add(s[r])
            maxlen= max(maxlen,r-l+1)
            r+=1

        return maxlen    

