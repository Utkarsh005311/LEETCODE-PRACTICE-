class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int>v;
       int n1=nums1.size();
       int n2=nums2.size();
       for(int i=0;i<n1;i++)
       {
        for(int j=0;j<n2;j++)
        {
            if(nums1[i]==nums2[j])
            {
                if(find(v.begin(),v.end(),nums1[i])==v.end())
                {
                    v.push_back(nums1[i]);
                }
            }
        }
       }
       return v;
    }
};