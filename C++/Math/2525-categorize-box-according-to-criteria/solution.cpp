class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long  volume=1LL*length*width*height;
        if(((length>=pow(10,4))||(width>=pow(10,4))||(height>=pow(10,4))||(volume>=pow(10,9)))&&(mass>=100)){
            return "Both";
        }else if(((length>=pow(10,4))||(width>=pow(10,4))||(height>=pow(10,4))||(volume>=pow(10,9)))){
            return "Bulky";
        }else if(mass>=100){
            return "Heavy";
        }else{
            return "Neither";
        }
    }
};