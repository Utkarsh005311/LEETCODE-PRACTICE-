class Solution {
public:
    bool isPalindrome(string s) {
        int l=s.length();
        string word="";
        for(int i=0;i<l;i++)
        {
            if(isalnum(s[i]))
            {
                word+=tolower(s[i]);
            }
        }
        int k=word.length();
        if(k==1)
        {
            return true;
        }
        int a=0;
        int b=k-1;
        while(a<b)
        {
          if(word[a]!=word[b])
          {
            return false;
          }
          a++;
          b--;
        }
      return true;
    }
};