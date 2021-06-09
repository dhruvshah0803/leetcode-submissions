class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
          vector<int> v;
        int c=0;
        int n = nums.size();
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 if(nums[i]==nums[j]&& i<j) c++;
             }
         }
        return c;
    
    }
};