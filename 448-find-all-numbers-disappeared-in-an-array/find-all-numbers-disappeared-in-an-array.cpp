class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         int n1=nums.size();
        vector<int>v;
        set<int>s;
        for(int i=0;i<n1;i++)
        {
            s.insert(nums[i]);
        }
        for(int j=1;j<=n1;j++)
        {
          if(s.count(j))
          {
            continue;
          }
          else
          {
            v.push_back(j);
          }

        }
      return v;
    }
};