class Solution {
public:
    vector<int> minOperations(string boxes) {
        int c;
        vector<int> ans;
        for(int i=0 ;i<boxes.length();i++){
            c=0;
            for(int j=0;j<boxes.length();j++){
                if(boxes[j]=='1')
                c+= abs(i-j);
            }
            ans.push_back(c);
        }
        return ans;
    }
};