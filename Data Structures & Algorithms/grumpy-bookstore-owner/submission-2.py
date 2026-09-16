class Solution:
    def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
        i=0
        j=0
        count=0
        while i<len(customers) and j<len(grumpy):
            if grumpy[j]==0:
                count+=customers[i]

            i+=1
            j+=1

        l=0
        extra=0
        for i in range(minutes):
            if grumpy[i]==1:
                extra+=customers[i]

        r=minutes
        max_extra=extra

        while r<len(grumpy):
            if grumpy[r]==1:
                extra+=customers[r]
            if r-l+1>minutes:
                if grumpy[l]==1:
                    extra-=customers[l]
                l+=1
            r+=1

            max_extra=max(max_extra,extra)

        return count+max_extra            





        
            