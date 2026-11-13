class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int n=words1.size();
        int n2=words2.size();
        unordered_map<string,int>m1,m2;
        for(string s:words1){
            m1[s]++;
        }
        for(string s:words2){
            m2[s]++;
        }
        int cnt=0;
        for(auto &it :m1){
            if(m1[it.first]==1&&m2.count(it.first)&&m2[it.first]==1){
                    cnt++;
            }
        }
        return cnt;
    }
};