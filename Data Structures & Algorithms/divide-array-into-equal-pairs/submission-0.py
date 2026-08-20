class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        mp={}

        if len(nums)%2==1:
            return False

        for i in range(len(nums)):
            mp[nums[i]]=mp.get(nums[i],0)+1

        for i in range(len(nums)):
            if mp[nums[i]]%2!=0:
                return False

        return True        


