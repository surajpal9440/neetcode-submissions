class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        mp={}
        mp2={}
        s=s.split()

        if len(s)!=len(pattern):
            return False

        for i in range(len(pattern)):
            if pattern[i] not in mp:
                if s[i] in mp2:
                    return False

                mp[pattern[i]]=s[i]
                mp2[s[i]]=pattern[i]

            else:
                if mp[pattern[i]]!=s[i]:
                    return False
        return True