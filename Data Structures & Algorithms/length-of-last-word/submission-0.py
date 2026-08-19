class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip()
        a=""
        for i in range(len(s)):
            if s[i]==' ':
               a=""
            else:
                a+=s[i]   
            

        count=0
        for ch in a:
            count+=1

        return count        