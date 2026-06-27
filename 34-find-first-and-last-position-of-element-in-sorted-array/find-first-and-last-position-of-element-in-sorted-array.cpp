class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         /*int i=0;
         int j=n-1;
        for(i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
                break;
            }
        }
        for(j=n-1;j>=0;j--)
        {
            if(nums[j]==target)
            {
                ans.push_back(j);
                break;
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;*/
        int n=nums.size();
        int low=0;
        int high=n-1;
        int lor=-1;
        int ror=-1;
        //leftmost occurence
        while(low<=high)
        {
            int mid=high-((high-low)/2);
            if(nums[mid]==target)
            {
                lor=mid;
                high=mid-1;
            }
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            if(nums[mid]>target)
            {
                high=mid-1;
            }
        }
        low=0;
        high=n-1;
        //Rightmost occurence
        while(low<=high)
        {
            int mid=high-((high-low)/2);
            if(nums[mid]==target)
            {
                ror=mid;
                low=mid+1;
            }
             if(nums[mid]<target)
            {
                low=mid+1;
            }
            if(nums[mid]>target)
            {
                high=mid-1;
            }
        }
       return {lor,ror};
    }
};