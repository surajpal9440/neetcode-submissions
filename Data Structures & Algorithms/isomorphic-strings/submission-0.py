class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mp={}
        mp2={}

        if len(s)!=len(t):
            return False

        for i in range(len(s)):
            if s[i] not in mp:
                if t[i] in mp2:
                    return False

                mp[s[i]]=t[i]
                mp2[t[i]]=s[i]
            else:
                if mp[s[i]]!=t[i]:
                    return False
        return True                    
