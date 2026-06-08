class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        string t="";
        for(auto ch:s)
        {
            mpp[ch]+=1;
        }
        vector<pair<int,char>>v;
        for(auto it:mpp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<>());
        for(auto it1:v)
        {   
            t.append(it1.first,it1.second);
        }
        return t;
    }
};