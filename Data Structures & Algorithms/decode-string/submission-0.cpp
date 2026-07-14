class Solution {
public:
    string decodeString(string s) {
        stack<int>st1;
        stack<string>st2;
        string str="";
        string curr_str="";
        string num="";

       for(char ch :s){
            
            if( isdigit(ch)){
               num+=ch;
            }
            else if(ch == '['){
                st1.push(stoi(num));
                st2.push(curr_str);

                curr_str="";
                num="";
            }
             
            else if(ch== ']' ){
              int a=st1.top();
              string b=st2.top();
              st1.pop();
              st2.pop();

                   str=b; 
              for(int i=0;i<a;i++) {
                str+=curr_str;
              } 
              curr_str=str;   
            }
            else{
                curr_str+=ch;
            }
       }
        return curr_str;
    }
};