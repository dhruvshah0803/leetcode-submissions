class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        int b;
        vector <int> ans;
        unordered_map <int,int> m;
        for(int i=0 ;i<n ;i++){
            m.insert({numbers[i] , i});
        }
        
        
        for(int i=0 ;i<n ;i++){
            b = target - numbers[i];
            
            if(m.count(b) != 0 ){
                auto it = m.find(b); 
                 if(i != it->second){
                ans.push_back(it->second + 1);
                 ans.push_back(i+1);
                     sort(ans.begin(),ans.end());
                   return ans;  
                 }
            }
            
            
        }
        
   return ans;
    }
};