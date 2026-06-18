class Solution {
public:
    int reverseDegree(string s) {
        int l=s.length();
        int t=0;
        for(int i=0;i<l;i++)
        {
            t=t+(123-int(s[i]))*(i+1);
        }
        return t;
    }
};