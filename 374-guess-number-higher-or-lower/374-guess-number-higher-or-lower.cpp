/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int lo=1,hi=n;
        int mid;
        int ans;
        while(lo<=hi){
            mid = lo+ (hi-lo)/2;
            ans=guess(mid);
            if(ans==0)
               return mid;
            else if(ans<0)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return -1;
    }
};