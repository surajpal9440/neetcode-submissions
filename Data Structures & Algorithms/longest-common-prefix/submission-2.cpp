class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size()==0)
          return "";

            string str="";
        for(int i=0;i<strs[0].size();i++){  //col-wise move krre letter ko

            for(int j=1; j<strs.size(); j++){ //check all words

                if(i>=strs[j].size() || strs[j][i]!=strs[0][i])
                  return str;
            }  
                   str+=strs[0][i];   
            
             
        }
        return str;
    } 
};