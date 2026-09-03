class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
     int n=nums1.size();
     bool k=false;
     for(int i=0;i<n;i++)
     {
         if(nums1[i]%2!=0)
         {
              k=true;
         }
     }
    int mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mi=min(nums1[i],mi);
    }
    if(mi%2==0&&k==false)
    {
        return true;
    }
    else if(mi%2!=0)
    {
        return true;
    }
    return false;
    }
};