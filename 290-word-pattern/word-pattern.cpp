class Solution {
public:
    bool wordPattern(string pattern, string s) {
      map<char,string>mpp;
      map<string,char>mpp1;
      int l=s.length();
      vector<string>ans;
      string temp="";
      for(int i=0;i<l;i++)
      {
         if(s[i]!=' ')
         {
            temp+=s[i];
         }
         else
         {
            ans.push_back(temp);
            temp="";
         }
      }
      if(!temp.empty())
      {
        ans.push_back(temp);
      }
      if(pattern.length()!=ans.size())
      {
        return false;
      }
     int j=0;
     for(auto t:ans)
     {
       if(mpp.find(pattern[j])==mpp.end()&&mpp1.find(t)==mpp1.end())
       {
        mpp[pattern[j]]=t;
        mpp1[t]=pattern[j];
        j++;
       }
       else
       {
        if(mpp[pattern[j]]==t)
        {
            j++;
        }
        else
        {
            return false;
        }
       }
     }
     return true;
    }
};