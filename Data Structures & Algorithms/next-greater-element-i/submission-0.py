class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        stack=[]
        mp={}

        for i in range(len(nums2)):

            while stack and nums2[i]>=stack[-1]:
                 mp[stack.pop()]=nums2[i]
            stack.append(nums2[i])


        ans=[]
        for i in range(len(nums1)):
            if nums1[i] in mp:
                ans.append(mp[nums1[i]])
            else:
                ans.append(-1)   

        return ans         
                    