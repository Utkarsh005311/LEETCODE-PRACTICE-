class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       /*vector<int>v;
        set<int>s;
        set<int>t;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            if(s.find(nums1[i])==s.end())
            {
                 s.insert(nums1[i]);
            }
        }
          for(int i=0;i<n2;i++)
        {
            if(t.find(nums2[i])==t.end())
            {
                 t.insert(nums2[i]);
            }
        }
        for(int i=0;i<n2;i++)
        {
             if(s.find(nums2[i])!=s.end()&&find(v.begin(),v.end(),nums2[i])==v.end())
            {
                 v.push_back(nums2[i]);
            }
        }
        return v;*/
        //vector<int>v;
        unordered_set<int>s(nums1.begin(),nums1.end());
        unordered_set<int>q;
        for(int x:nums2)
        {
            if(s.count(x))
            {
                q.insert(x);
            }
        }
        return vector<int>(q.begin(),q.end());
    }
};