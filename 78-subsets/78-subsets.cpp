class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        vector<vector<int>> ans;
        int powsize = pow(2,n);  // here n= 3, powsize= 8
        for(int counter =0;counter<powsize;counter++){
//            counter= 1
//             counter=2
            
//             counter= 5 => 101 =>[1,3]  => we check the bit is set or not
            // .....   counter=7
            for(int j=0;j<n;j++){
                if((1<<j) & counter)
                  vec.push_back(nums[j]);  
            }
            ans.push_back(vec);
            vec.clear();
        }
        return ans;
    }
};