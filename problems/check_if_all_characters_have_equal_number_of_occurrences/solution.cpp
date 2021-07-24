class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        if(s.length()==1)return true;
        
        for(int i=0 ;i<s.length();i++){
            mp[s[i]]++;
        }
        int same = mp[s[0]];
        for(auto mpi : mp){
        if(mpi.second!=same)return false;
        }
        
        return true;
    }
};