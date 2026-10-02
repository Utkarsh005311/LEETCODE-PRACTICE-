class Solution {
public:
    bool isvalidP(string s)
    {   
        stack<char>st;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                st.push(')');
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            
            }
        }
            return st.empty();
      }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        int t=n;
        while(t!=0)
        { 
            temp+='(';
            t--;
        }
        t=n;
        while(t!=0)
        {
            temp+=')';
            t--;
        }
        do
        {
            if(isvalidP(temp))
            {
                ans.push_back(temp);
            }
        }
        while(next_permutation(temp.begin(),temp.end()));
        return ans;
    }
};