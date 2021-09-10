class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(r*c != m*n) return mat;
        deque<int> v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> ans(r);
        for(int i=0;i<r;i++){
            for(int j=0;j<c; j++){
                ans[i].push_back(0);
            }
        }
        
         for(int i=0;i<r;i++){
            for(int j=0;j<c; j++){
                ans[i][j] = v.front();
                v.pop_front();
            }
        }
        return ans;
    }
};