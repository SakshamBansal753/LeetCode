class Solution {
public:
    bool isValidSerialization(string preorder) {
        int capacity=1;
        for(int i=0;i<preorder.size();i++){
            if(preorder[i]==','){
                continue;
            }
            capacity--;
            if(capacity<0){
                return false;
            }
            if(preorder[i]!='#'){
                while(i<preorder.size()&&preorder[i]!=','){
                    i++;
                }
                capacity+=2;
            }


        }
        if(capacity==0)
        return true;
        return false;
    }
};