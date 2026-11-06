class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp={}

        for i in range(len(strs)):
           temp = ''.join(sorted(strs[i]))

           if temp not in mp:
                mp[temp] = []

           mp[temp].append(strs[i])

        ans=[]

        for key,value in mp.items():
            ans.append(value)

        return ans        