class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x_or = start^goal;
        int cnt=0;
        while(x_or){
            x_or = x_or& (x_or-1);
            cnt++;
        }
        return cnt;
    }
};