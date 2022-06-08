class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt=0;
        while(left!=right){
            // 5 = 101
            // 7 = 111
            //     shift left and right-->right till we obt common bits and inc cnt.
            //     and then left shift it till cnt 

            left>>=1;
            right>>=1;
            cnt++;
        }
        return left<<cnt;
    }
};