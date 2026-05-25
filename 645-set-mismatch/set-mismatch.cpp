class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i;
        int n=nums.size();
        map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]+=1;
        }
        for(auto it:mpp)
        {
            if(it.second==2)
            {
               v.push_back(it.first);
            }
            
        }
         for(i=1;i<=n;i++)
        {
            if(mpp.count(i)==false)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};