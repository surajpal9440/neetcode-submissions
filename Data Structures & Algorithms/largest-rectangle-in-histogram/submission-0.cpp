class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n=heights.size();
        stack<int>st;
        vector<int>nse(n,n);
        vector<int>pse(n,-1);

        //nse
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }

        //pse
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }

        int maxarea=0;
        for(int i=0;i<n;i++){
            int width=nse[i]-pse[i]-1;
            int area=width*heights[i];
            maxarea=max(maxarea,area);
        }
        return maxarea;
    }
};
