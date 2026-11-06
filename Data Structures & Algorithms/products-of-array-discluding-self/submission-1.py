class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans=[1]*len(nums)

        #left
        for i in range(1,len(nums)):
            ans[i]=nums[i-1]*ans[i-1]

        max=1
        for j in range(len(nums)-1,-1,-1):
            ans[j]*=max
            max*=nums[j]

        return ans        
