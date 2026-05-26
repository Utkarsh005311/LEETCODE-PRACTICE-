class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>exp;
        int tmp;
        int h=heights.size();
        int i;
        for(i=0;i<=h-1;i++)
        {
          exp.push_back(heights[i]);
        }
        for(i=0;i<h-1;i++)
        {
            for(int j=0;j<h-i-1;j++)
            {
                if(exp[j]>exp[j+1])
                {
                    tmp=exp[j+1];
                    exp[j+1]=exp[j];
                    exp[j]=tmp;
                }
            }
        }
        int cnt=0;
        for(i=0;i<=h-1;i++)
        {
            if(exp[i]!=heights[i])
            {
                cnt++;
            }
        }
       return cnt;
    }
};