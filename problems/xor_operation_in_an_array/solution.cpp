class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> a;
        int ans=0;
        int i=0;
        while(n){
            a.push_back(start + (2*i));
            i++;
            n--;
        }
                        
        for(auto j : a){
            ans^=j;
        }
        
        return ans;
    }
};