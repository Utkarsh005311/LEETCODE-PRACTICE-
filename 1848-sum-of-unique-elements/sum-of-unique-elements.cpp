class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      map<int,int>mpp;
      int s=0;
      int n=nums.size();
      for(int i=0;i<n;i++)
      {
        mpp[nums[i]]+=1;
      }
      bool baby=true;
      for(auto it:mpp)
      {
        if(it.second==1)
        {  baby=false;
           s=s+it.first;
        }
      }
      if(baby)
      {
        return 0;
      }
      else
      {
        return s;
      }
      
    }
};