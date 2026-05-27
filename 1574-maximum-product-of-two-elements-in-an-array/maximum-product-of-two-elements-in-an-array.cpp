class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=0,max2=0;
        for(auto x:nums)
        {
            if(x>max1)
            {
                max2=max1;
                max1=x;
            }
            else if(x>max2)
            {
                max2=x;
            }
            else
            continue;
        }
        return (max1-1)*(max2-1);
        /*int lg=0;
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
        return lg;*/
    }
};