class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int,pair<int,int> > > p ;
        
  for(int i=0;i<n;i++){
      
      pair <int,int> P;
      P.first = points[i][0];
      P.second = points[i][1];
      
      pair<int,pair<int,int> > MP;
      MP.first = points[i][0]*points[i][0] + points[i][1]*points[i][1];
      MP.second = P;
      p.push(MP);
      
      if(p.size()>k) p.pop();
  }
        vector<vector<int>> ans;
        while(!p.empty()){
            vector<int> v;
            v.push_back(p.top().second.first);
            v.push_back(p.top().second.second);
            p.pop();
            ans.push_back(v);
        }
        return ans;
    }
};