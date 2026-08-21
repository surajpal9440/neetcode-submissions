class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        mp={}

        for i in range(len(grid)):
            for j in range(len(grid)):
                mp[grid[i][j]]=mp.get(grid[i][j],0)+1

        repeated=-1
        missing=-1
        n=len(grid)
        for i in range(1,n*n+1):
            if i in mp and mp[i]==2:
                repeated=i 
            if i not in mp:
                missing=i

        return [repeated,missing]                   
        