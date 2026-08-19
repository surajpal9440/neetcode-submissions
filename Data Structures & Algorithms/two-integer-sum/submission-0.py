class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}

        for i in range(len(nums)):
            comple=target-nums[i]

            if comple in mp:
                return [mp[comple],i]

            mp[nums[i]]=i    

        return [-1,-1]    