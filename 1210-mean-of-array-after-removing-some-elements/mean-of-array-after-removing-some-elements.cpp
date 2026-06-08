class Solution {
public:
    double trimMean(vector<int>& arr) {
      int n=arr.size();
      int idx=ceil((5*n)/100);
      double s=0;
      double c=0;
      sort(arr.begin(),arr.end());
      for(int i=idx;i<n-idx;i++)
      {
        c++;
      }
      for(int i=idx;i<n-idx;i++)
      {
        s=s+arr[i];
      }
      double ans=s/c;
      return ans;
    }
};