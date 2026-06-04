class Solution {
public:
    bool isAnagram(string s, string t) {
        int l=s.length();
        int l1=t.length();
        if(l!=l1)
        {
            return false;
        }
        map<char,int>mpp;
        map<char,int>mpp1;
        for(auto ch:s)
        {
            mpp[ch]+=1;
        }
         for(auto ch:t)
        {
            mpp1[ch]+=1;
        }
        for(auto it:mpp)
        {
            if(mpp1.find(it.first)==mpp1.end())
            {
                return false;
            }
            if(mpp1[it.first]!=it.second)
            {
                return false;
            }
        }
        return true;
    }
};