class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    map<int,int>mpp;
    map<int,int>mpw;
    vector<int>v;
    int n1=nums1.size();
    int n2=nums2.size();
    for(int i=0;i<n1;i++)
    {
        mpp[nums1[i]]+=1;
    }
      for(int i=0;i<n2;i++)
    {
        mpw[nums2[i]]+=1;
    }
    for(auto it1:mpp)
    {
       int key=it1.first;
       if(mpw.find(key)!=mpw.end())
       {
        int count=min(mpp[key],mpw[key]);
        while(count--)
        {
            v.push_back(key);
        }
       }
     }
     return v;
    }
};