class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i;
        int n=nums.size();
        int j;
        int c=0;
        vector<int>ans;
        for(i=0;i<n;i++)
     {  
        c=0;
        for(j=0;j<n;j++)
        {
            if(nums[j]<nums[i])
            {
                c++;
            }
        }
      ans.push_back(c);
    }
    return ans;
    }
};