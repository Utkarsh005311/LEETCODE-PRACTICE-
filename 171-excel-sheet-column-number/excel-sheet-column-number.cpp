class Solution {
public:
    int titleToNumber(string columnTitle) {
        int l=columnTitle.length();
        map<char,int>mpp;
        int j;
        char ch='A';
        for(j=1;j<=26;j++)
        {
            mpp[ch]=j;
            ch=char(int(ch)+1);
        }
        int s=0;
        j=0;
        for(int i=l-1;i>=0;i--)
        {
           s=s+mpp[columnTitle[i]]*pow(26,j);
            j++;
        }
        return s;
    }
};