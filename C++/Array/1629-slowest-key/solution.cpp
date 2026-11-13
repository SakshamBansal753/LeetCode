class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans=keysPressed[0];
        int duration=0;
        int max=releaseTimes[0];
        for(int i=1;i<keysPressed.length();i++){
            duration=releaseTimes[i]-releaseTimes[i-1];
            if(duration>max){
                
                ans=keysPressed[i];
                max=duration;
            }else if (duration==max){
                if(ans<keysPressed[i])
                ans=keysPressed[i];

            }
        }
        return ans;
    }
};