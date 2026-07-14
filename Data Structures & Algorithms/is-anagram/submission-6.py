class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s)!=len(t):
            return False

        mp={}

        for i in range(len(s)):
            if s[i] in mp:
                mp[s[i]]+=1
            else:
               mp[s[i]]=1    

        for i in range(len(t)):
            if t[i] not in mp:
                return False

            mp[t[i]]-=1
            if mp[t[i]]<0:
             return False

        return True          