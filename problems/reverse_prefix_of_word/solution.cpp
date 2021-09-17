class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        int q =0;
        
        for(int i=0;i<word.size();i++){
            s+=word[i];
            if(s[i]==ch) {
                q=i;
                break;}
        }
        
        if(q==0) return word;
        reverse(s.begin(),s.end());
        
        for(int i=q+1;i<word.size();i++){
            s+=word[i];
        }
        
        return s;
    }
};