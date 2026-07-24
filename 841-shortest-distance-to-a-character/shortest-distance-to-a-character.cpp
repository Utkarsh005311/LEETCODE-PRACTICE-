class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       int l=s.length();
       vector<int>a;
       vector<int>ans;
       for(int i=0;i<l;i++)
     {
        if(s[i]==c)
        {
            a.push_back(i);
        }
     }
       int m=a.size();
       int mi=INT_MAX;
       for(int j=0;j<l;j++)
     {
        mi=INT_MAX;
        for(int k=0;k<m;k++)
        {
           mi=min(mi,abs(j-a[k]));
        }
        ans.push_back(mi);
     }
     return ans;
    }
};