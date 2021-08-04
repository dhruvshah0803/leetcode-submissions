class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        for(int j=0 ;j<s.size();j++){
            ans+="0";
        }
        
        int temp =0;
        for(int i=0 ;i<s.size();i++){
            temp = indices[i];
            ans[temp] = s[i];
        }
        return ans;
        
        
    }
};