class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int sum = 0;
        int a,b;
    for(int i=0;i<n-1;i++){
        a = abs(points[i][0] - points[i+1][0]);
          b = abs(points[i][1] - points[i+1][1]);
        sum+=max(a,b);
    }
        return sum;
    }
};