class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
        {
            return -1;
        }
        vector<int>suffix(n);
        suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        int ma=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ma=max(ma,nums[i]);
            if(ma-suffix[i]<=k)
            {
                return i;
            }
        }
        return -1;
    }
};