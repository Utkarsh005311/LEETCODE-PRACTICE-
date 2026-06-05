class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>mpp;
        int s=0,d;
        for(int i=1;i<=n;i++)
        {   s=0;
            int x=i;
            while(x!=0)
            { 
              d=x%10;
              s=s+d;
              x=x/10;
            }
            mpp[s]+=1;
        }
        auto iq=mpp.begin();
        int lg=iq->second;
        for(auto it:mpp)
        {
            if(lg<it.second)
            {
                lg=it.second;
            }
        }
        int c=0;
        for(auto it1:mpp)
        {
            if(it1.second==lg)
            {
                c++;
            }
        }
        return c;
    }
};