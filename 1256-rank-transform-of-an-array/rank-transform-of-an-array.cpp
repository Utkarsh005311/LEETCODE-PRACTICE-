class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>sko=arr;
        int curr=0;
        int l=arr.size();
        sort(sko.begin(),sko.end());
        map<int,int>mpp;
        int j=1;
        for(int i=0;i<l;)
        {
            curr=sko[i];
            while(i+1<l&&curr==sko[i+1])
            {
                i++;
            }
            mpp[curr]=j;
            j++;
            i+=1;
        }
        for(int i=0;i<l;i++)
        {
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};