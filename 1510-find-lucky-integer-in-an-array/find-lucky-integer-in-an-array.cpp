class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]+=1;
        }
        int x=0;
        int lg=0;
        for(auto it:mpp)
        {
            if(it.first==it.second)
            {   
                 x=1;
                 if(lg<it.first)
                 {
                    lg=it.first;
                 }
            }
        }
        if(x==0)
        {
            return -1;
        }
        else
        {
            return lg;
        }
    }
};