class Solution {
public:
    int trap(vector<int>& height) {
        //maxleft height nikalenge
        vector<int>maxleftarr;
            int maxleft=0;
        for(int i=0;i<height.size();i++){
            int ele=height[i];
            maxleft=max(maxleft,ele);
            maxleftarr.push_back(maxleft);
        }
        //maxright height nikalenge
        vector<int>maxrightarr(height.size());
            int maxright=0;
        for(int i=height.size()-1;i>=0;i--){
            int ele=height[i];
            maxright=max(maxright,ele);
            maxrightarr[i]=maxright;

        }
        

        // 
        int total=0;
        for(int i=0;i<height.size();i++){
            int maxheight=min(maxleftarr[i],maxrightarr[i])-height[i];
            total+=maxheight;
        }
        return total;


    }
};
