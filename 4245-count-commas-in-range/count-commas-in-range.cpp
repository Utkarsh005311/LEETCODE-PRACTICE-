class Solution {
public:
    int countCommas(int n) {
        string s=to_string(n);
        if(s.length()<4)
        {
            return 0;
        }
        int c=0;
        for(int i=1000;i<=n;i++)
        {
            c++;
        }
        return c;
    }
};