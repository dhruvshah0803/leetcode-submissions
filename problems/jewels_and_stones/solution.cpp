class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> m;
        for(int i=0;i<jewels.length();i++){
            char c = jewels[i];
            m[c]++;
        }
        int cnt =0;
        for(int i=0;i<stones.length();i++){
            char c = stones[i];
            for(auto j:m){
                if(j.first == c) cnt++; 
            }
        }
        
        return cnt;
    }
};