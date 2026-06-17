class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
        int l=s.size();
        vector<char>t=s;
        int j=l-1;
        for(int i=0;i<l;i++)
        {
            s[i]=t[j];
            j--;
        }
    }
};