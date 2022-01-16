class Solution {
public:
    bool isPalindrome(int x) {
    if(x < 0) return false;
    
    long y = 0;
    int temp_initial = x;
    
    while(x > 0){
        y = y*10 + x%10;
        x /= 10;
    }
    
    return temp_initial==y;
    }
};