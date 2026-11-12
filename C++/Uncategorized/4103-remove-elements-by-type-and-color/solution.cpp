class Solution {
public:
    bool canRemoveAll(vector<int>& types, vector<int>& colors, vector<int>& groupSize) {
        int n=types.size();
        int m=groupSize.size();
        stack<tuple<int,int,int>>st;
        for(int i=0;i<n;i++){
            int t=types[i];
            int c=colors[i];
            if(!st.empty()&&get<0>(st.top())==t&&get<1>(st.top())==c){
                get<2>(st.top())++;
            }else{
            st.push({t,c,1});
            }
            if(get<2>(st.top())==groupSize[t]){
                st.pop();
            }

        }
        return st.size()==0;
    }
};