class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        l=0
        r=0
        nums.sort()
        temp=0
        ans=float('inf')

        r=k

        while r<=len(nums):

            temp=nums[r-1]-nums[l]
            ans=min(ans,temp)
            l+=1
            r+=1

        return ans    



            