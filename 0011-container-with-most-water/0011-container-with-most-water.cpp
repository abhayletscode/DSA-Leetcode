class Solution {
public:
    int maxArea(vector<int>& height) {
       int lp=0,rp=height.size()-1;
       int maxWater=0;
       while(lp<rp){
        maxWater=max(maxWater,min(height[lp],height[rp])*(rp-lp));
        height[lp]>height[rp]?rp--:lp++;

       }
       return maxWater;

    }
};