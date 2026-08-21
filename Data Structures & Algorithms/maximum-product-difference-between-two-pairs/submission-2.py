class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        
        maxi=float('-inf')
        secmaxi=float('-inf')
        mini=float('inf')
        secmini=float('inf')

        for i in range(len(nums)):
            if nums[i]>maxi:
                secmaxi=maxi
                maxi=nums[i]
                
            elif nums[i]>secmaxi:
                secmaxi=nums[i]
    

            if nums[i]<mini:
                secmini=mini
                mini=nums[i]  
                b=mini*secmini
            elif nums[i]<secmini:
                secmini=nums[i]
    
           
        a=maxi*secmaxi  
        b=mini*secmini  

        return a-b          