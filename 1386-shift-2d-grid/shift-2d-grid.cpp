class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int total=m*n;
        k=k%total;
        if(k==0)
        {
            return grid;
        }
        vector<vector<int>>res(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               int flat_res=i*n+j;
               int flt=(flat_res+k)%total;
               int n_row=flt/n;
               int n_col=flt%n;
               res[n_row][n_col]=grid[i][j];
            }
        }
        return res;
    }
};