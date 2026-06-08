class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       int n=score.size();
       unordered_map<int,string>mpp;
       vector<int>temp=score;
       sort(temp.begin(),temp.end());
       for(int i=0;i<temp.size();i++)
       {
        if(i==n-1)
        {
            mpp[temp[i]]="Gold Medal";
        }
        else if(i==n-2)
        {
            mpp[temp[i]]="Silver Medal";
        }
        else if(i==n-3)
        {
            mpp[temp[i]]="Bronze Medal";
        }
        else
        {
            mpp[temp[i]]=to_string(n-i);
        }
       }
       vector<string>ans;
     for(int x:score)
     {
      ans.push_back(mpp[x]);
     }
     return ans;
    }
};