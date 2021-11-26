class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int> > minh;
        int n = matrix.size();
        for(int i=0 ;i<n;i++){
             for(int j=0 ;j<n;j++){
            minh.push(matrix[i][j]);
        }
        }
        //int c = n*n -k;
            while(k>1){
                minh.pop();
                k--;
            }
        return minh.top();
    }
};