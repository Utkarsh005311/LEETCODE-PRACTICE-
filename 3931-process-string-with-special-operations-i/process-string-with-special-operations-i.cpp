class Solution {
public:
    string processStr(string s) {
        int l=s.length();
        string ans="";
        for(int i=0;i<l;i++)
        {
            if(s[i]=='#')
            {
              string r=ans;
              ans=ans+r;
            }
            else if(s[i]=='%')
            {
                reverse(ans.begin(),ans.end());
            }
            else if(s[i]=='*')
            {
                int t=ans.length();
                if(t!=0)
                {
                    ans.erase(t-1,1);
                }
            }
            else
            {
                ans=ans+s[i];
            }
        }
        return ans;
    }
};