class Solution:
    def findMin(self, nums: List[int]) -> int:
        
     start=0
     end=len(nums)-1
     ans=0


     while start<=end:
         mid=start+(end-start)//2

         if nums[mid]>nums[len(nums)-1]:
              start=mid+1

         else:
            ans=nums[mid]
            end=mid-1        


     return ans       