class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int>st;
        vector<int>ans;
        int n1=nums1.size();
        int n2=nums2.size();
        int n3=nums3.size();
       for(int i=0;i<n1;i++)
       {
         st.insert(nums1[i]);
       }
        for(int i=0;i<n2;i++)
       {
         st.insert(nums2[i]);
       }
        for(int i=0;i<n3;i++)
       {
         st.insert(nums3[i]);
       }
       for(const auto& it:st)
       {  
        int c=0;
        if(find(nums1.begin(),nums1.end(),it)!=nums1.end())
        {
            c++;
        }
         if(find(nums2.begin(),nums2.end(),it)!=nums2.end())
        {
            c++;
        }
         if(find(nums3.begin(),nums3.end(),it)!=nums3.end())
        {
            c++;
        }
        if(c==2||c==3)
        {
            ans.push_back(it);
        }
       }
       return ans;
    }
};