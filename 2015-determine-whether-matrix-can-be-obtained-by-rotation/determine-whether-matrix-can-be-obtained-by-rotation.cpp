class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
             if(mat==target)
             {
                return true;
             }
             int n=mat.size();
             int c=3;
            while(c!=0)
            {
                for(int i=0;i<n;i++)
             {
                for(int j=i+1;j<n;j++)
                {
                    swap(mat[i][j],mat[j][i]);
                }
             }
             for(int i=0;i<n;i++)
             {
                reverse(mat[i].begin(),mat[i].end());
             }
             if(mat==target)
             {
                return true;
             }
             c--;
            }
            return false;
    }
};