class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        bool k=false;
        for(auto s:patterns)
        {
            if(word.contains(s)==true)
            {
                c++;
            }
        }
        return c;
    }
};