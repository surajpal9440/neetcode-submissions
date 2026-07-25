class Solution:
    def mySqrt(self, x: int) -> int:
        
        if x<2:
            return x

        start=1
        end=x
        ans=0

        while start<=end:
            mid=start+(end-start)//2

            if mid*mid==x:
                return mid

            elif mid*mid<x:
                ans=mid
                start=mid+1
            else:
                end=mid-1

        return ans                