class Solution:
    def numSubseq(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        power=[1]*n

        for i in range(1, n):
            power[i]=(power[i-1]*2) % (10**9+7)

        left = 0
        right = n - 1
        ans = 0

        while left <= right:
            if nums[left] + nums[right] <= target:
                ans += power[right - left]
                left += 1
            else:
                right -= 1

        return ans % (10**9 + 7)