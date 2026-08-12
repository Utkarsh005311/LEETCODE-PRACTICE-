class Solution {
public:
    int rotatedDigits(int n) {
        int c=0;
       for(int i=1;i<=n;i++)
       {
           string s=to_string(i);
           if((s.contains("4")==true)||(s.contains("3")==true)||(s.contains("7")==true))
           {
            continue;
           }
           else
           {
            if((s.contains("2")==true)||(s.contains("5")==true)||(s.contains("6")==true)||(s.contains("9")==true))
            {
                c++;
            }
            else
            {
                continue;
            }
           }
           s="";
       }
       return c;
    }
};