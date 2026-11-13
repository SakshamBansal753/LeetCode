class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>f1,f2;
        int n=paths.size();
        for(int i=0;i<n;i++){
            f1.insert(paths[i][0]);
            f2.insert(paths[i][1]);
        }
        for(auto city :f2){
            if(f1.find(city)==f1.end()) return city;
        }
        return "";
    }
};