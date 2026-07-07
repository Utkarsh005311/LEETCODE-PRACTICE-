class Solution {
public:
    long long sumAndMultiply(int n) {
       if(n==0)
       {
        return 0;
       }
       string s=to_string(n);
       string temp="";
       int l=s.length();
       for(int i=0;i<l;i++)
       {
          if(s[i]!='0')
          {
            temp+=s[i];
          }
       }
       int x=stoi(temp);
       int t=x;
       int k;
       long long sum=0;
       while(t!=0)
       {
        k=t%10;
        sum=sum+k;
        t=t/10;
       }
       return 1LL*sum*x;
    }
};