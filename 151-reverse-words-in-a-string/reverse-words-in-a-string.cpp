class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        vector<string>v;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]!=' ')
            {
                temp=temp+s[i];
            }
            else
            {   
                if(temp.empty())
                {
                    continue;
                }
                else
                {
                    v.push_back(temp);
                    temp="";
                }
            }
        }
        if(!temp.empty())
        {
            v.push_back(temp);
        }
        reverse(v.begin(),v.end());
        string ans="";
        int i=0;
        for(auto &word:v)
        {   
            ans+=word+" ";
        }
        ans.pop_back();
        return ans;
    }
};