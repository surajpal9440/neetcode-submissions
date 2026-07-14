class Solution {
public:
    int reverse(int x) {
        if(x==0){
            return 0;
        }
        int ans=0;
        while(x!=0){

            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            int digit=x%10;
             x=x/10;
            ans=digit+(ans*10);
        }
        return ans;
    }
};
