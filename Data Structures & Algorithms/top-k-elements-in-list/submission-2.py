import heapq
from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        mp = {}
        q = []
        ans = []

        for x in nums:
            mp[x] = mp.get(x, 0) + 1

        for key, value in mp.items():
            heapq.heappush(q, (-value, key))

        for i in range(k):
            ans.append(heapq.heappop(q)[1])

        return ans