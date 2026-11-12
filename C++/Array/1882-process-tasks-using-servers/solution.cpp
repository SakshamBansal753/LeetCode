class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>free;
        priority_queue<tuple<long,long,long>,vector<tuple<long,long,long>>,greater<tuple<long,long,long>>>busy;
        for(int i=0;i<servers.size();i++){
            free.push({servers[i],i});
        }
        int m=tasks.size();
        vector<int>ans(m);
        for(int j=0;j<tasks.size();j++){
            while(!busy.empty()&&get<0>(busy.top())<=j){
                auto[_,w,i]=busy.top();
                busy.pop();
                free.push({(int)w,(int)i});
            }
            if(!free.empty()){
                auto[s,i]=free.top();
                free.pop();
                ans[j]=i;
                busy.push({(long long)j+tasks[j],s,i});
            }else{
                auto[f,s,i]=busy.top();
                busy.pop();
                ans[j]=(int)i;
                busy.push({f+tasks[j],s,i});
            }
        }
        return ans;
    }
};