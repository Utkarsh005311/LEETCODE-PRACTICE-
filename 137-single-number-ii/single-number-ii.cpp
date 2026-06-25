class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            mpp[nums[i]]+=1;
        }
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return 0;
    }
};