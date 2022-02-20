class Solution {
public:
    int fibbo(int n){
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else
         return   fibbo(n-1) + fibbo(n-2);
    }
    
    int fib(int n) {
        int ans = fibbo(n);
        return ans;
    }
};