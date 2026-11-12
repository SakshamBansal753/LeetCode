class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        int ml=0;
        unordered_map<int,int>m;
        int n=fruits.size();
        while(r<n){
            m[fruits[r]]++;
            while(m.size()>2){
                m[fruits[l]]--;
                if(m[fruits[l]]==0)m.erase(fruits[l]);
                l++;
            }
            if(m.size()<=2){
                ml=max(ml,r-l+1);
            }
            r++;
        }
        return ml;
    }
};