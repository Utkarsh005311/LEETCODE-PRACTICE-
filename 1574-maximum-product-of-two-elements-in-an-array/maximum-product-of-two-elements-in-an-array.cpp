class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int lg=0;
        int n1=nums.size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                if(i!=j&&lg<(nums[i]-1)*(nums[j]-1))
                {
                    lg=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return lg;
    }
};