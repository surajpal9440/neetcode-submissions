class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        mp = {'b': 1, 'a': 1, 'l': 2, 'o': 2, 'n': 1}
        count = {}

        for ch in text:
            count[ch] = count.get(ch, 0) + 1

        ans = float('inf')

        for ch in mp:
            if ch not in count:
                return 0

            ans = min(ans, count[ch] // mp[ch])

        return ans