class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        st=set()
        
        
        for i in range(len(emails)):
            help=emails[i]
            local=True

            i=0
            j=len(help)
            temp=""
            while i<j:
                if help[i]=='.'and local:
                    i+=1
                    continue
                if help[i]=='+':
                    while help[i]!='@':
                        i+=1
                    local=False

                temp+=help[i]
                i+=1
            st.add(temp) 

        return len(st)               