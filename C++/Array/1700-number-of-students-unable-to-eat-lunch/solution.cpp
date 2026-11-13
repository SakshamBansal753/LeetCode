class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         stack<int> s;
        for (int i = sandwiches.size() - 1; i >= 0; i--) {
            s.push(sandwiches[i]);
        }
        queue<int>st;
        for(int num :students){
            st.push(num);
        }int count=0;
        while(!st.empty() && count < st.size()){
            if(s.top()==st.front()){
                 st.pop();
                s.pop();
                count=0;
            }else {
                int n=st.front();
                st.pop();
                st.push(n);
                count++;
            }
        }
        return st.size();

    }
};