class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        bool Nfind =true;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                Nfind=false;
                break;
            }
        }
        if(Nfind)
        {
            return nums.size();
        }
        while(i!=j)
       {   
          if(nums[i]==val)
          { 
            if(nums[j]!=val)
            {  
               swap(nums[i],nums[j]);
               i++;
            }
            else
            {
                j--;
            }
          }
          else
          {
            i++;
          }
       }
        return i;
    }
};