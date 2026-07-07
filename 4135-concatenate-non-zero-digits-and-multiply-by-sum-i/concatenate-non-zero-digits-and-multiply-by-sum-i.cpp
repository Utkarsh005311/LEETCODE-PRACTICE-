class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)
        {
            return 0;
        } 
        string s="";
        int d=0;
        while(n!=0)
        {
           d=n%10;
           if(d!=0)
           {
            s+=d+'0';
           }
           n=n/10;
        }
        reverse(s.begin(),s.end());
        int x=stoi(s);
        int t=x;
        int k;
        long long sum=0;
        while(t!=0)
        {
            k=t%10;
            sum=sum+k;
            t=t/10;
        }
        return 1LL*x*sum;
    }
};