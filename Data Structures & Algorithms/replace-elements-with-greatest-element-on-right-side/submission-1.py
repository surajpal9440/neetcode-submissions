class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        n=len(arr)
        ans=[0]*n
        ans[n-1]=-1
        greatest=arr[n-1]

        for i in range(len(arr)-2,-1,-1):
            ans[i]=greatest

            if arr[i]>greatest:
                greatest=arr[i]
        return ans