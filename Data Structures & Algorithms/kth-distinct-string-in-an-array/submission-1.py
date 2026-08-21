class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        mp={}

        for i in range(len(arr)):
            mp[arr[i]]=mp.get(arr[i],0)+1

        count=0
        for i in range(len(arr)):
            if mp[arr[i]]==1:
                count+=1

                if count==k:
                    return arr[i]

        
        return ""            