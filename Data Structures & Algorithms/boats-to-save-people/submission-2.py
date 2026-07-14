class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        
        start=0
        end=len(people)-1
        count=0
        people.sort()

        while start <= end:
            if people[start]+people[end]<=limit:
                count+=1
                start+=1
                end-=1
            elif people[start]+people[end]>limit:
                count+=1
                end-=1   

        return count            
