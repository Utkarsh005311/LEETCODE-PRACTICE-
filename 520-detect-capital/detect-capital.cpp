class Solution {
public:
    bool detectCapitalUse(string word) {
       bool k=true;
       int l=word.length();
       int b=0;
       for(auto c:word)
       {
         if(isupper(c))
         {
           b++;
           k=false;
         }
       }
       if(k)
       {
        return true;
       }
       char ch2=word[0];
       if(b==1&&isupper(ch2))
       {
        return true;
       }
       else if(b==l)
       {
          return true;
       }
       return false;
    }
};