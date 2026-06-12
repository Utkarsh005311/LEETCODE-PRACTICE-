class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
     {  
        int j=i+1;
        while(j!=n)
        {
          if(abs(nums[i]-nums[j])==k&&i<j)
          {
             c++;
          }
          j++;
        }
     }
     return c;
    }
};