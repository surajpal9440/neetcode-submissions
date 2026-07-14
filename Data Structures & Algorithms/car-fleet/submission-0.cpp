class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        stack<double>st;
        vector<pair<int,int>> cars;
        for(int i=0;i<position.size();i++){
            cars.push_back({position[i],speed[i]});
        }  
        sort(cars.rbegin(),cars.rend());

       
            double time;
           int fleet=0;
        for(int i=0;i<position.size();i++){
            time  =(double)(target-cars[i].first)/cars[i].second;
            if(st.empty()){
              st.push(time);
               fleet++;
            }
            
            else if(st.top()<time){
                st.push(time);
                fleet++;
            }  
            else{
                continue;
            }
        }
        return fleet;
    }   
};
