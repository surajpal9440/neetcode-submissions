class Solution:
    def findLucky(self, arr: List[int]) -> int:
        mp={}
        ans=-1
        for i in range(len(arr)):
            mp[arr[i]]=mp.get(arr[i],0)+1

        for i in range(len(arr)):
            if mp[arr[i]]==arr[i]:
                ans=max(ans,arr[i])
                


        if ans==-1:
            return -1
        else:
            return ans               