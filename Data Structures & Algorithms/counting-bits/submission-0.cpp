class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer(n+1);
        for(int i=0; i<=n; i++){
            int count = 0, j = i;
            while(j){
                count += (j & 1);
                j = j >> 1;
            }
            answer[i] = count;
        }  

        return answer;
    }
};
