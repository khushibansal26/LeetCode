class Solution {
public:
    bool isSameAfterReversals(int num) {
        int ans1=0;
        int ans2=0;
        int dig;
        int orig = num;
        while(num!=0){
            dig = num%10;
            ans1 = ans1*10+ dig;
            num/=10;
        }
        int temp =ans1;
        while(temp!=0){
            dig = temp%10;
            ans2 = ans2*10+ dig;
            temp/=10;
        }
        if(orig==ans2)
            return true;
        else
            return false;
    }
};