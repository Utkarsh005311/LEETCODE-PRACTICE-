class Solution {
public:
    bool sumGame(string num) {
        int s1=0;
        int s2=0;
        int a=0,b=0;
        int l=num.length();
        for(int i=0;i<l/2;i++)
        {
            if(num[i]=='?')
            {
                a++;
            }
            else
            {
                s1+=num[i]-'0';
            }
        }
         for(int i=l/2;i<l;i++)
        {
            if(num[i]=='?')
            {
                b++;
            }
            else
            {
                s2+=num[i]-'0';
            }
        }
        if((2*(s1-s2))!=(9*(b-a)))
        {
            return true;
        }
        return false;
    }
};