class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0; int counter=0;
        for(const string& s:events){
            if(counter==10) return {score,counter};
            if(s=="W") counter++;
            else if(s=="WD"||s=="NB") score++;
            else{
                score+=s[0]-'0';
            }
        }
        return {score,counter};
    }
};