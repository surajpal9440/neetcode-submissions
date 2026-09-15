class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        count=0
        maxcount=0

        for i in range(len(nums)-1):
            if nums[i]<nums[i+1]:
                count+=nums[i]
            else:
                count+=nums[i]
                maxcount=max(maxcount,count)
                count=0

        count+=nums[-1]
        maxcount=max(maxcount,count)

        return maxcount        
                




                    
