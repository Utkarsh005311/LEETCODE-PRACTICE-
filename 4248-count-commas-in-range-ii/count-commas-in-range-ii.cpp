class Solution {
public:
    long long countCommas(long long n) {
        string s=to_string(n);
        long long l=s.length();
        long long total=0;
        if(l<4)
        {
            return 0;
        }
        map<int,int>mpp;
        mpp[4]=1;
        mpp[5]=1;
        mpp[6]=1;
        mpp[7]=2;
        mpp[8]=2;
        mpp[9]=2;
        mpp[10]=3;
        mpp[11]=3;
        mpp[12]=3;
        mpp[13]=4;
        mpp[14]=4;
        mpp[15]=4;
        mpp[16]=5;
        long long b=0;
        long long diff=(n-(pow(10,l-1)))+1;
        for(int i=4;i<l;i++)
        {
           b+=mpp[i]*(9*pow(10,i-1));
        }
        total=diff*mpp[l]+b;
        return total;
    }
};