class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        ans=[]
        for i in range(len(nums)):
            nums[i]=nums[i]*nums[i]

        nums.sort()  
        for i in range(len(nums)):
            ans.append(nums[i])  

        return ans    
