class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int hash[30001]={0};
        int hash1[30001]={0};
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           if(nums[i]>=0)
           {
            hash[nums[i]]+=1;
           }
           else
           {
            hash1[nums[i]*-1]+=1;
           }
        }
      for(int i=0;i<n;i++)
      {
        if(nums[i]>=0)
        {
            if(hash[nums[i]]==1)
            {
                return nums[i];
            }
        }
        if(nums[i]<0)
        {
            if(hash1[nums[i]*-1]==1)
            {
                return nums[i];
            }
        }
      }
      return 0;
      }
};