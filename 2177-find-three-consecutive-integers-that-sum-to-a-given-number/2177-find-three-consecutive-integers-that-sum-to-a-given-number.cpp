class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x = num/3;
        if((x-1)+ x + (x+1)==num)
            return{x-1, x, x+1};
        else
            return{};
        
    }
};