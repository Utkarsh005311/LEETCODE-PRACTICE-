class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mpp;
        for(auto ch:s)
        {
            mpp[ch]+=1;
        }
        if(mpp.size()==1)
        {
            return true;
        }
        auto first=mpp.begin();
        for(auto it:mpp)
        {
            if(it.second!=first->second)
            {
                return false;
            }

        }
        return true;
    }
};