class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int>m;
        int n=s.length();
        string result;
        for(char c:s){
            m[c]++;
        }
        priority_queue<pair<char,int>>pq;
        for(auto &p :m){
            pq.push({p.first,p.second});
        }
        while(!pq.empty()){
            auto [c,v]=pq.top();
             pq.pop();
            int use=min(repeatLimit,v);
            result.append(use,c);
            v-=use;
            if(v>0){
                if(pq.empty()) break;
                auto[next,nextv]=pq.top();
                pq.pop();
                result+=next;
                nextv--;
                if(nextv>0)pq.push({next,nextv});
                pq.push({c,v});
            }
        }
        return result;
    }
};