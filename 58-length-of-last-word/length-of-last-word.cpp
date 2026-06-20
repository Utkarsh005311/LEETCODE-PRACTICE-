class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        int c=0;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                c++;
            }
            if(s[i]==' '&&c==0)
            {
                continue;
            }
            if(s[i]==' ')
            {
                break;
            }
        }
        return c;
    }
};