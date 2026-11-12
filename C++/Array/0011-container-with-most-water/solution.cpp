class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int l=0;
        int n=height.size();
        int r=n-1;
        while(l<r){
            int heights=min(height[l],height[r]);
            int width=r-l;
            int area=heights*width;
            maxi=max(maxi,area);
            height[l]<=height[r]?l++:r--;

        }
        return maxi;
    }
};