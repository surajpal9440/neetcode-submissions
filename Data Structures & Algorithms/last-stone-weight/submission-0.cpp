class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int>q;

       for(int x:stones){
        q.push(x);
       } 

    while(q.size()>=2){       
        int x=q.top();
        q.pop();
        int y=q.top();
        q.pop();

       if(x==y){
        continue;

       }
       else if(x>y){
        x=x-y;
        q.push(x);
       }}
     if(q.size()==0){
        return 0;
     }
     else{
        return q.top();
     }
    }
};
