class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        stack<int>st;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                st.push(')');
                c++;
            }
            else
            {
               if(!st.empty()&&st.top()==ch&&c!=0)
               {
                st.pop();
                c--;
               }
               else
               {
                st.push(ch);
               }
            }
        }
        return st.size();
    }
};