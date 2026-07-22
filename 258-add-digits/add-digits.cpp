class Solution {
public:
    int addDigits(int num) {
        string str=to_string(num);
        if(str.length()==1)
        {
            return num;
        }
        int t=num;
        int s=0;
        while(t!=0)
        {
            int d=t%10;
            s=s+d;
            t=t/10;
        }
        return addDigits(s);
    }
};