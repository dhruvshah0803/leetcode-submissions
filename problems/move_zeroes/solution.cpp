class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//         int c=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i] == 0){
//                   c++;
//                 nums.erase(nums.begin() + i);
              
                
//             }
//         }
        
//         while(c>0){
//             nums.push_back(0);
//             c--;
//         }
        
        
        vector<int> og;
        int c=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0)og.push_back(nums[i]);
            if(nums[i]==0) c++;
        }
        
        nums = og;
        
           while(c>0){
             nums.push_back(0);
             c--;
         }
        
    }
};