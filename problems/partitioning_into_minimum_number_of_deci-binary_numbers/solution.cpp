class Solution {
public:
    int minPartitions(string n) {
char c='0';
for(int i=0;i<n.length();i++)
{
     c=max(c,n[i]);
}
int b=c-'0';
return b;
    }
};