class Solution {
public:
    long long minEnd(int n, int x) {
        long long k=n-1;
        long long result=x;
        long long bit=1;

        while(k>0){
            if((x & bit)==0){
                if(k & 1){
                    result=result | bit; //set this bit ,isse sbsse badi value milegi
                }
                k=k>>1;
            }
            bit=bit<<1;
        }
        return result;
    }
};