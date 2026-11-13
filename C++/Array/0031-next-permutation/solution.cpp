class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int pi=-1,n=a.size();
          for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                pi=i;
                break;
            }
          }
         if(pi==-1){
            reverse(a.begin(),a.end());
              return;
         }
        for(int i=n-1;i>pi;i--){
            if(a[i]>a[pi]){
                swap(a[i],a[pi]);
                break;
            }
        }
        int i=pi+1;int j=n-1;
        while(i<=j){
            swap(a[i++],a[j--]);

        }
    }
};