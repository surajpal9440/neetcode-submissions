class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        mp = {}
        count = 0

        for i in range(len(chars)):
            mp[chars[i]] = mp.get(chars[i], 0) + 1

        for word in words:
            temp = mp.copy()
            flag = True

            for i in range(len(word)):
                if word[i] in temp and temp[word[i]] > 0:
                    temp[word[i]] -= 1
                else:
                    flag = False
                    break

            if flag:
                count += len(word)

        return count