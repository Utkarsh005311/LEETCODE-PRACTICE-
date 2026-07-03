class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<string,vector<string>>mpp;
      for(auto &s:strs)
      {
        string sorted_str=s;
        sort(sorted_str.begin(),sorted_str.end());
        mpp[sorted_str].push_back(s);
      }
      vector<vector<string>>ans;
      for(auto it:mpp)
      {
        ans.push_back(it.second);
      }
      return ans;
    }
};