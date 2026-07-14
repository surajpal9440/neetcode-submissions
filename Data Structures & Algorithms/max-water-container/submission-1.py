class Solution:
    def maxArea(self, heights: List[int]) -> int:
        
        left=0
        right=len(heights)-1
        maxarea=0
        while left<right:
            h=min(heights[left],heights[right])
            width=right-left
            area=width*h

            maxarea=max(maxarea,area)

            if heights[left]<heights[right]:
                left+=1
            else:
                right-=1

        return maxarea           