class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        int n=score.size();
        int kika[n];
        if(n==1)
        {
            ans.push_back("Gold Medal");
            return ans;
        }
        if(n==2)
        {
            if(score[0]<score[1])
            {
                ans.push_back("Silver Medal");
                ans.push_back("Gold Medal");
            
            }
            else
            {
                 ans.push_back("Gold Medal");
                 ans.push_back("Silver Medal");
            }
            return ans;
        }
        for(int i=0;i<n;i++)
        {
            kika[i]=score[i];
        }
        sort(score.begin(),score.end());//1 2 3 4 5
        int first=score[n-1];
        int second=score[n-2];
        int third =score[n-3];
         for(int i=0;i<n;i++)
        {
            if(kika[i]==first)
            {
                ans.push_back("Gold Medal");
            }
            else if(kika[i]==second)
            {
                ans.push_back("Silver Medal");
            }
            else if(kika[i]==third)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
               int a=kika[i];
               for(int j=0;j<score.size();j++)
               {
                if(score[j]==a)
                {
                    ans.push_back(to_string(n-j));
                    break;
                }
               }
            }
        }
        return ans;
    }
};