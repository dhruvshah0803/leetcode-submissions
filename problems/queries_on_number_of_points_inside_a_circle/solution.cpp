class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
 vector<int> ans(queries.size(),0);
        for(int i = 0;i<queries.size();++i)
        {
            for(int j = 0;j<points.size();++j)
            {
				
                int d = ceil(sqrt(pow(queries[i][0]-points[j][0],2) + 
                                  pow(queries[i][1]-points[j][1],2)));
                if(d<=queries[i][2])
                    ++ans[i];
            }
        }
        return ans;
    }
    
   
    
};