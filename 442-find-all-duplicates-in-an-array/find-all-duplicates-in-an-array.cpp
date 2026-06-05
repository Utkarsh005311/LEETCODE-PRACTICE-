class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int A[100001]={0};
        vector<int>ans;
        for(int i=0;i<n;i++)
        {   
            A[nums[i]]+=1;
            if(A[nums[i]]==2)
            {
                ans.push_back(nums[i]);
            }
          
        }
        return ans;

    }
};