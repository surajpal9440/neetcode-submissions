class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
       
        mp={}

        for i in range(len(magazine)):
            mp[magazine[i]]=mp.get(magazine[i],0)+1


        for i in range(len(ransomNote)):
            if ransomNote[i] not in mp:
                return False

            mp[ransomNote[i]]-=1
            if mp[ransomNote[i]]<0:
                return False

                
        return True  