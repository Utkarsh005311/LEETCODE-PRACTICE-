class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                k++;
            }
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
              nums[j]=nums[i];
              j++;
            }
        }
        j=n-k;
        while(k!=0)
        {
            nums[j]=0;
            j++;
            k--;
        }
    }
};