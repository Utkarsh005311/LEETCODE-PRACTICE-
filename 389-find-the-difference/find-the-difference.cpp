class Solution {
public:
    char findTheDifference(string s, string t) {
       int ans=0;
       int l=s.length();
       int k=l+1;
       for(int i=0;i<l;i++)
       {
        ans^=s[i];
       }
       for(int i=0;i<k;i++)
       {
        ans^=t[i];
       }
       return ans;
    }
};


        