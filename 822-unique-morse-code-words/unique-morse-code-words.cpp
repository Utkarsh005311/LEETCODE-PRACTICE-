class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string s[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<char,string>mpp;
        char ch='a';
        for(int i=0;i<26;i++)
        {
            mpp[ch]=s[i];
            ch=char(int(ch)+1);
        }
        set<string>ans;
        for(auto p:words)
        {   
            string w="";
            for (auto ch:p)
            {
               w=w+mpp[ch];
            }
            ans.insert(w);
        }
       return ans.size();
    }
};