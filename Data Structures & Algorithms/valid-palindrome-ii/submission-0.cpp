class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else if(s[start] != s[end]){

                int i = start, j = end-1;
                while(i < j && s[i] == s[j]){
                    i++;
                    j--;
                }
                if(i >= j) return true;

                i = start+1, j = end;
                while(i < j && s[i] == s[j]){
                    i++;
                    j--;
                }
                if(i >= j) return true;

                return false;
            }
        }
        return true;
    }
};