class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>m;
        int ans=0;
        for(auto word:words){
            string w=word;
            reverse(w.begin(),w.end());
            if(m[w]>0){
                ans++;
                m[w]--;
            }else{
            m[word]++;}
        }
        return ans;
    }
};