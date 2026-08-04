class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int ma=INT_MIN;
        int mi=INT_MAX;
     for(int i=0;i<n;i++)
     {
        ma=max(ma,nums[i]);
     }
     for(int i=0;i<n;i++)
     {
        mi=min(mi,nums[i]);
     }
     for(int i=mi;i<=ma;i++)
     {
        if(s.find(i)==s.end())
        {
            ans.push_back(i);
        }
     }
     return ans;
    }
};