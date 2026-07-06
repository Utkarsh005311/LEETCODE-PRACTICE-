class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int c=0;
        set<vector<int>>st;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
             if(st.find(intervals[i])==st.end()&&intervals[j][0]<=intervals[i][0]&&intervals[i][1]<=intervals[j][1]&&i!=j)
             {
                c++;
                st.insert(intervals[i]);
                break;
             }
           }
        }
        return n-c;
    }
};