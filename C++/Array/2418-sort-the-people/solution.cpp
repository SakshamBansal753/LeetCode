class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>height;
        vector<string>ans;
        for(int i=0;i<heights.size();i++){
                height[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        for(int i=heights.size()-1;i>=0;i--){
            ans.push_back(height[heights[i]]);
        }
        return ans;
    }
};