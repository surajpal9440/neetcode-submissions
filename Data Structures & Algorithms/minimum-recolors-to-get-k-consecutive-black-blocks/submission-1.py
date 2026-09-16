class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        l=0
        r=0
        count=0
        mincount=float('inf')

        for i in range(len(blocks)):
            if blocks[r]=='W':
                count+=1  

            if r-l+1>k:    
               if blocks[l]=='W':
                   count-=1
               l+=1

            if r-l+1==k:
                mincount=min(mincount,count)
            r+=1
        
           
        return mincount           

