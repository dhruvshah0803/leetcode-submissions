class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,large=nums[0];
        int n = nums.size();
        
        for(int i=0 ;i<n ;i++){
            cs = cs + nums[i];     
            large = max(large,cs);
            if(cs<0) cs =0;
        }
        
        return large;
    }
};