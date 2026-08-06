class Solution {
public:
    int smallestNumber(int n, int t) {
        int k=0;
        int prod=1;
        int mi=INT_MAX;
        for(int i=n;i<=100;i++)
        {
            k=i;
            prod=1;
            while(k!=0)
            {
               int d=k%10;
               prod=prod*d;
               k=k/10;
            }
            if(prod%t==0)
            {
               mi=min(mi,i);
            }
        }
        return mi;
    }
};