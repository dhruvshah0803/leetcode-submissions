class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       map<int,int> mp;   
    if(trust.size()==0 && n==1) return 1;
    for(int j=0;j<trust.size();j++) {
        mp[trust[j][1]]++;
        mp[trust[j][0]]--;           
    }
for(auto c:mp){
    if(c.second==n-1) return c.first;
    
} 
return -1;
}
        
        

};