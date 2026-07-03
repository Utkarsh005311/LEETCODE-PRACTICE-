class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       int l=list1.size();
       int k=list2.size();
       vector<string>ans;
       int b;
       int sm=l*k;
       int i,j;
       map<string,int>mpp;
       for(i=0;i<l;i++)
       {
         mpp[list1[i]]=i;
       }
       for(j=0;j<k;j++)
       {
        if(mpp.find(list2[j])!=mpp.end())
        {
            b=mpp[list2[j]]+j;
            if(b<sm)
            {
              sm=b;
            }
        }
       }
        b=0;
        for(j=0;j<k;j++)
       {
        if(mpp.find(list2[j])!=mpp.end())
        {
            b=mpp[list2[j]]+j;
            if(b==sm)
            {
              ans.push_back(list2[j]);
            }
        }
       }
       return ans;
    }
};