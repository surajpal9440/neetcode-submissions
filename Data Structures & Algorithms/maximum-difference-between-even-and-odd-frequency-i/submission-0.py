class Solution:
    def maxDifference(self, s: str) -> int:
        mp={}

        for i in range(len(s)):
            mp[s[i]]=mp.get(s[i],0)+1

        max_odd=float('-inf')
        min_even=float('inf')

        for i in range(len(s)):
            freq = mp[s[i]]

            if freq % 2 == 1:
                if freq > max_odd:
                    max_odd= freq

            else:
                if freq<min_even:
                    min_even = freq

        return max_odd-min_even   
