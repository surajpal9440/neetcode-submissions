class Solution:
    def countSeniors(self, details: List[str]) -> int:
        count=0
        for i in range(len(details)):
            helper=details[i]

            ans=int(helper[11:13])
            if ans>60:
               count+=1
               
        return count       