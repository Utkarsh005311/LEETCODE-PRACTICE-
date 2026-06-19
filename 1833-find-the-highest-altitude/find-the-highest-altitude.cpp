class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>altitude;
        int lg=0;
        int j=0;
        int s=0;
        int i=0;
        for(i=0;i<n;i++)
        {
            j=0;
            s=0;
          while(j<=i)
          {
            s=s+gain[j];
            j++;
          }
          if(lg<s)
          {
            lg=s;
          }
        }
        return lg;
    }
};