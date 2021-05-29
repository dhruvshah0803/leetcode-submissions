class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int f=0;
        int l=nums.size() - 1;
        for(int i=0 ;i<nums.size()/2;i++){
            v.push_back(nums[f] + nums[l]);
            f++;
            l--;
        }
        sort(v.begin(),v.end());
        return v.back();
    }
};