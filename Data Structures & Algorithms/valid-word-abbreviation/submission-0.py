class Solution:
    def validWordAbbreviation(self, word: str, abbr: str) -> bool:
        i=0
        j=0
        
        while i<len(word) and j<len(abbr):

            if word[i]==abbr[j]:
                i+=1
                j+=1
            else:

                if not abbr[j].isnumeric():
                     return False
                num=0
                if abbr[j] == '0':
                    return False

                while j<len(abbr) and abbr[j].isnumeric():
                    num=num*10+int(abbr[j])
                    j+=1
                 
                while num>0:
                    i+=1
                    num-=1

                    if i > len(word):
                        return False

            

        return i==len(word) and j==len(abbr)          