class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total=sum(nums)
        leftsum=0
        ans=-1
        for i in range(len(nums)):
            rightsum=total-leftsum-nums[i]

            if leftsum==rightsum:
                ans=i
                break

            leftsum+=nums[i]

        return ans        