class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<char,int>mpp;
        map<int,char>mpw;
        string ans="";
        int s=0;
         char ch='a';
        for(int i=0;i<26;i++)
        {
            mpp[ch]=weights[i];
            ch=char(int(ch)+1);
        }
        char cw='a';
        for(int i=25;i>=0;i--)
        {
            mpw[i]=cw;
            cw=char(int(cw)+1);
        }
        string temp="";
        for(auto p:words)
        {   
            s=0;
            temp=p;
            for(auto ch1:temp)
            {
               s=s+mpp[ch1];
            }
            s=s%26;
            ans=ans+mpw[s];
        }
        return ans;
    }
};