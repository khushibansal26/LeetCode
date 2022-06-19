class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int n = a.size();
        int ans=1;
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1])
                ans=i;
        }
        return ans;
    }
};