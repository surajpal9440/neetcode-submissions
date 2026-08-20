class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        count=0
        helper=[]
        for i in range(len(heights)):
            helper.append(heights[i])

        heights.sort() 
        for i in range(len(helper)):
            if heights[i]!=helper[i]:
                count+=1 

        return count              