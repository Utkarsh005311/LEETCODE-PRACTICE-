class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        map<int,int>mp;
        map<int,int>mpp;
        int n=digits.size();
        for(int i=0;i<n;i++)
        {
            mpp[digits[i]]+=1;
        }
        int c=0;
        bool k=false;
        for(int i=100;i<=998;i+=2)
        {
            int t=i;
            while(t!=0)
            {
               int d=t%10;
               mp[d]+=1;
               t=t/10;
            }
            for(auto it:mp)
            {   
                 k=false;
                if(mpp.find(it.first)!=mpp.end()&&mpp[it.first]>=it.second)
                {
                      k=true;
                }
                else
                {
                    k=false;
                    break;
                }
            }
            if(k)
            {
                c++;
            }
            mp.clear();
        }
        return c;
    }
};