class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(auto ch:s)
        {
          if(isupper(ch))
          {
            ans+=tolower(ch);
          }
          else
          {
          ans=ans+ch;
          }
        }     
        return ans;
    }
};