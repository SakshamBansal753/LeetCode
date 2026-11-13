class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_set<string> st(wordList.begin(), wordList.end());
        vector<vector<string>> ans;

        if(st.find(endWord) == st.end()) return ans;

       
        unordered_map<string, vector<string>> parents;
        unordered_set<string> current, next;

        current.insert(beginWord);
        bool found = false;

        while(!current.empty() && !found){
            for(auto &w : current) st.erase(w);

            for(auto &word : current){
                string temp = word;

                for(int i = 0; i < temp.size(); i++){
                    char original = temp[i];

                    for(char c = 'a'; c <= 'z'; c++){
                        temp[i] = c;

                        if(st.find(temp) != st.end()){
                            next.insert(temp);
                            parents[temp].push_back(word);

                            if(temp == endWord) found = true;
                        }
                    }
                    temp[i] = original;
                }
            }

            current = next;
            next.clear();
        }

        vector<string> path = {endWord};
        dfs(endWord, beginWord, parents, path, ans);

        return ans;
    }

    void dfs(string word, string beginWord,
             unordered_map<string, vector<string>>& parents,
             vector<string>& path,
             vector<vector<string>>& ans){

        if(word == beginWord){
            reverse(path.begin(), path.end());
            ans.push_back(path);
            reverse(path.begin(), path.end());
            return;
        }

        for(auto &p : parents[word]){
            path.push_back(p);
            dfs(p, beginWord, parents, path, ans);
            path.pop_back();
        }
    }
};