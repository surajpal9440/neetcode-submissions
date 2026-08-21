class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        mp={}

        for i in range(len(arr)):
            mp[arr[i]]=mp.get(arr[i],0)+1

        temp=[]
        for i in range(len(arr)):
            if mp[arr[i]]==1:
                temp.append(arr[i])

        if len(temp)>=k:
           return temp[k-1] 
        else:
            return ""            