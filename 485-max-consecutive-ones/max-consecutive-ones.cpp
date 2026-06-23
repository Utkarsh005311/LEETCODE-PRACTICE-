class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        int lg=0;
        int ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c+=1;
                if(lg<c)
                {
                    lg=c;
                }
            }
            else
            {
              c=0;
            }
        }
        return lg;
    }
};