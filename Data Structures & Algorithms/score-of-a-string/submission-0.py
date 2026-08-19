class Solution:
    def scoreOfString(self, s: str) -> int:
        
        ans=0
        for i in range(0,len(s)-1):
            a=int(ord(s[i]))
            b=int(ord(s[i+1]))

            ans+=abs(b-a)

        return ans    
