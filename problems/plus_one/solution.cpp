class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> ans(digits);
         ans[ans.size()-1] = ans[ans.size()-1] + 1;
         if(ans[ans.size()-1] <= 9){
             return ans;
         }
        
        
        int n = ans.size() -1;
      
        for(int i = n ;i >=0;i--){
            if(i == 0 && ans[i] >= 10) {ans[i] = 0;ans.insert(ans.begin(),1); }
            
            if(ans[i] > 9){
                ans[i] = 0;
            ans[i-1] = ans[i-1] + 1;
                
            }
            
        }
        return ans;
        
        
    }
};