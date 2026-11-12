class Solution {
public:
    bool iscycle(int curr,vector<int>&left,vector<int>&right,vector<bool>&visited){
         if (visited[curr])
            return false;

        visited[curr] = true;
        if(left[curr]!=-1){
            
            if(!iscycle(left[curr],left,right,visited)) return false;
        }
        if(right[curr]!=-1){
            
            if(!iscycle(right[curr],left,right,visited)) return false;
        }
        return true;
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int>childs(n,false);
        for(int c:leftChild){
            if(c!=-1)
            childs[c]=true;
        }
        for(int c:rightChild){
            if(c!=-1){
                if(childs[c]) return false;
                else childs[c]=true;
            }
        }
        int root = -1; 
        for (int i = 0; i < n; ++i) {
            if (!childs[i]) {
                if (root == -1)
                    root = i; 
                else
                    return false; 
            }
        }
        if(root==-1) return false;
        vector<bool>visited(n);
    
        if(!iscycle(root,leftChild,rightChild,visited)) return false;
        for(int i = 0 ; i < visited.size() ; i ++){
            if(!visited[i])
                return false ;
        }
        return true;


    }
};