class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mpp;
        int n=nums.size();
        int k;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]+=1;
            if(mpp[nums[i]]>1)
            {
                k=nums[i];
                break;
            }
        }
         return k;
    }
};