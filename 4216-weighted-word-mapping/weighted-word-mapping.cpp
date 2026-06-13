class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string &word:words)
        {   int s=0;
            for(auto ch:word)
            {
                s=s+weights[ch-'a'];
            }
            ans=ans+char(('z'-(s%26)));
        }
        return ans;
    }
};