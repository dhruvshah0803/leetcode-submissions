class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m1;
         map<int,int> m2;
        vector<int> v;
        set<int> s;
        for(int i=0 ;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        for(int i=0 ;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        
        for(int j=0 ;j<nums2.size();j++){
            m2[nums2[j]]++;
        }
        int fre=0;
         for(auto i : s){
           if( m1[i] >0 && m2[i]>0){
                 fre =(min(m1[i],m2[i]));
               while(fre>0){
                 v.push_back(i);
               fre--;
               }
                
            }
             
             
        }
        return v;
    }
};