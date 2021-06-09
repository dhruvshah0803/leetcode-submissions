class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        map<int,int> mp;
        for(int j=0; j<nums.size();j++){
                mp[nums[j]]++;
            }
        
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(auto j : mp){
                if(nums[i] > j.first)c+=j.second;
            }
            v.push_back(c);
        }
        return v;
    }
};