class Solution {
public:
    int compareVersion(string version1, string version2) {
        int x=0,y=0;
        int n1=version1.length();
        int n2=version2.length();
        for(int i=0,j=0;i<n1||j<n2;i++,j++){
            while(i<n1&&version1[i]!='.'){
                x=x*10+(version1[i]-'0');
                i++;
            }
            while(j<n2&&version2[j]!='.'){
                y=y*10+(version2[j]-'0');
                j++;
            }
            if(x<y){
                return -1;
            }else if(x>y){
                return 1;
            }
            x=0;
            y=0;
        }
      return 0;
    }
};