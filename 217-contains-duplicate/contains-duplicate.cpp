class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {   mpp[nums[i]]+=1;
            if(mpp[nums[i]]==2)      
            {
                return true;
            }    
        }
        return false;
    }
};
      