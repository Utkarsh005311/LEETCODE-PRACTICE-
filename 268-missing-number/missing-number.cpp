class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        set<int>seen;
        for(int i=0;i<n;i++)
        {
            seen.insert(nums[i]);
        }
        for(int i=0;i<=n;i++)
        {
            if(seen.find(i)==seen.end())
            {
                return i;
            }

        }
        return -1;
    }
};