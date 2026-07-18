class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=nums.size();
        int sm=INT_MAX;
        int lg=0;
        for(int i=0;i<l;i++)
        {
           sm=min(sm,nums[i]);
        }
         for(int i=0;i<l;i++)
        {
           lg=max(lg,nums[i]);
        }
        return gcd(lg,sm);
    }
};