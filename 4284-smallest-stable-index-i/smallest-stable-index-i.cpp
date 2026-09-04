class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
        {
            return -1;
        }
        vector<int>suf(n);
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=min(suf[i+1],nums[i]);
        }
        int ma=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ma=max(nums[i],ma);
            if(ma-suf[i]<=k)
            {
                return i;
            }
        }
        return -1;
    }
};
