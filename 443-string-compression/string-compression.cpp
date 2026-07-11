class Solution {
public:
    int compress(vector<char>& chars) {
       int l=chars.size();
       int t=0;
       char currentchar;
        int count =0;
       for(int i=0;i<l;)
       {
        currentchar=chars[i];
        count=0;
        while(i<l&&chars[i]==currentchar)
        {
            count++;
            i++;
        }
        chars[t++]=currentchar;
        if(count>1)
        {
          string s=to_string(count);
          for(char c:s)
          {
            chars[t++]=c;
          }
        }
       }
       return t;
    }
};