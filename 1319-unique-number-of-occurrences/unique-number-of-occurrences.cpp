class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]+=1;
        }
        for(auto it:mpp)
        {
            for(auto it1:mpp)
          {
            if(it.first!=it1.first&&it.second==it1.second)
            {
                return false;
            }
          }

        }
        return true;
    }
};