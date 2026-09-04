class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int ma=INT_MIN;
        int mi=INT_MAX;
        int g=INT_MAX;
        bool c=false;
        for(int i=0;i<n;i++)
        {
           mi=INT_MAX;
           ma=max(ma,nums[i]);
           for(int m=i;m<n;m++)
           {
             mi=min(mi,nums[m]);
           }
           if(ma-mi<=k)
           {
             c=true;
             g=min(g,i);
           }
        }
        if(c)
        {
            return g;
        }
        return -1;
    }
};