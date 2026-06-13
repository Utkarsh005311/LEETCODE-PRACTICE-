class Solution {
public:
    bool equalFrequency(string word) {
        map<char,int>mpp;
        int l=word.length();
        for(int i=0;i<l;i++)
        {
            auto temp=word;
            temp.erase(i,1);
            unordered_map<char,int>mpp;
            for(auto ch:temp)
            {
                 mpp[ch]+=1;
            }
            set<int>fq;
            for(auto const& [key,val]:mpp)
            {
                fq.insert(val);
            }
            if(fq.size()==1)
            {
                return true;
            }
        }
        return false;
    }
};