class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=knowledge.size();
        vector<string>b;
        map<string,string>mpp;
        for(int i=0;i<n;i++)
        {
           mpp[knowledge[i][0]]=knowledge[i][1];
        }
        int t=s.length();
        for(int i=0;i<s.length();i++)
        {   
            string temp="";
            if(s[i]=='(')
            {  
               int k=i;
               i=i+1;
               while(s[i]!=')')
               {
                temp+=s[i];
                i++;
               }
               int x=temp.length()+2;
               if(mpp.find(temp)!=mpp.end())
               {
                  s.replace(k,x,mpp[temp]);
                  i=k+mpp[temp].length()-1;
               }
               else
               {
                 s.replace(k,x,"?");
                 i=k;
               }
            }
        }
        return s;
    }
};