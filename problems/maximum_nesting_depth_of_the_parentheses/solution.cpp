class Solution {
public:
    int maxDepth(string s) {
        int c=0, m =0;
        for(auto i :s){
            if(i=='(') c++;
            if(i==')') c--;
            m = max(c,m);
        }
        return m;
    }
};