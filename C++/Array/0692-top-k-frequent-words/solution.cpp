class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        int n=words.size();
        unordered_map<string,int>m;
        for(string word:words){
            m[word]++;
        }
        sort(words.begin(),words.end(),[&m](string a,string b){
            if(m[a]!=m[b])
            return m[a]>m[b];
              return a < b;
        });
        for(int i=0;i<n;i++){
           if(ans.empty() || ans.back() != words[i])
    ans.push_back(words[i]);
            
            if(ans.size()==k) return ans;
        }
        return ans;
    }
};