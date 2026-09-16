class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:
        l=0
        r=0
        count=0
        sum=0

        for r in range(k):
            sum+=arr[r]

        r=k-1    
           

        while r<len(arr):
            if sum//k>=threshold:
                count+=1
            
            sum-=arr[l]
            l+=1
            r+=1
            if r<len(arr):
                sum+=arr[r]
            
        return count        


