class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
          set<int>s;
          for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
         if(s.size()>=3)
         {
           set<int>::iterator it=s.end();
           it--;
           it--;
           it--;
           return *it;
         }
           set<int>::iterator it1=s.end();
           it1--;
          return *(it1);
    }
};