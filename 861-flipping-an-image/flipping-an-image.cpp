class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        vector<int>ans;
        vector<vector<int>>content;
        for(int i=0;i<m;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(image[i][j]==0)
                {
                    ans.push_back(1);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            content.push_back(ans);
            ans.clear();
        }
        return content;  
    }
};