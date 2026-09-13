class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        ans=[0]*len(nums)

        positive=0
        negative=1 # for putting the negative value start with index 1

        for i in range(len(nums)):
            if nums[i]>0:
                ans[positive]=nums[i]
                positive+=2
            else:
                ans[negative]=nums[i]
                negative+=2

        return ans            
    
