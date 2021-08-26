class Solution {
public:
    int findGCD(vector<int>& nums) {
     int n = nums.size();
        sort(nums.begin(),nums.end());
        return gcd(nums[n-1] ,nums[0]);
        
    }
    
    int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
};