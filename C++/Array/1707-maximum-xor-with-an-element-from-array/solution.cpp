class Node{
    private:
    Node*links[2];
    public:
    Node(){
         links[0] = nullptr;
        links[1] = nullptr;
    }
    bool containkey(int bit){
        return links[bit]!=NULL;
    }
    void put(int bit ,Node *node){
        links[bit]=node;
    }
    Node* get(int bit){
        return links[bit];
    }
};
class Trie{
    Node*root;
    public:
    Trie(){
        root=new Node();
    }
    void insert(int num){
        Node *node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(!node->containkey(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
    }
    int maxval(int num){
        int maxn=0;
        Node*node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(node->containkey(1-bit)){
                maxn=maxn|(1<<i);
                node=node->get(1-bit);
            }else{
                node=node->get(bit);
            }
        }
        return maxn;
    }
};
class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        sort(nums.begin(),nums.end());
        vector<pair<int,pair<int,int>>>oq;
        int q=queries.size();
        int n=nums.size();
        Trie trie;
        vector<int>ans(q,-1);
        for(int i=0;i<q;i++){
            oq.push_back({queries[i][1],{queries[i][0],i}});
        }
        sort(oq.begin(),oq.end());
        int ind=0;
        for(int i=0;i<q;i++){
            int ai=oq[i].first;
            int xi=oq[i].second.first;
            int qind=oq[i].second.second;
            while(ind<n&&nums[ind]<=ai){
                trie.insert(nums[ind]);
                ind++;
            }
            if(ind!=0)
            ans[qind]=trie.maxval(xi);
        }
        return ans;
    }
};