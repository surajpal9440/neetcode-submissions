class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        ans=sorted(nums1+nums2)
        n=len(ans)

        if n%2==1:
            return float(ans[n//2])

        else:
            return (ans[n//2-1]+ans[n//2])/2    