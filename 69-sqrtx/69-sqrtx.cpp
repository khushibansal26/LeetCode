class Solution {
public:
    int mySqrt(int x) {
      long long low = 1;
        long long hi =x;
        long long mid;
        int ans;
        while(mid*mid!=x){
        mid= (low + hi)/2;
            if(mid * mid==x)
            {ans =mid;
            break;}
            else if(mid * mid < x && (mid+1)*(mid+1)>x )
               {ans =mid;
            break;}
            else if(mid*mid>x)
                hi= mid;
            else
                low =mid;
        }
        return ans;
        
    }
};