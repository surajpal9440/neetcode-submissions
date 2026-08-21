class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        mp={}

        count=0
        for i in range(len(allowed)):
            mp[allowed[i]]=mp.get(allowed[i],0)+1

        for word in words:
            flag=True

            for i in range(len(word)):
                if word[i] not in mp:
                    flag=False
                    break

            if flag:        
               count+=1        

        return count