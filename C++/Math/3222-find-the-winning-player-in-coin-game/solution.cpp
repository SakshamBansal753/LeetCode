class Solution {
public:
    string winningPlayer(int x, int y) {
        int count =0;
        while(x>0&&y>=4){
            count++;
            x--;
            y-=4;
        }
        return count%2==0 ? "Bob": "Alice";
    }
};