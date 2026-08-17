class Solution {
public:
    int countPoints(string rings) {
        int n=rings.length();
        int hred[10]={0};
        int hblue[10]={0};
        int hgreen[10]={0};
        for(int i=0;i<n;i+=2)
        {
            char ch=rings[i];
            int rod=rings[i+1]-'0';
            if(ch=='R')
            {
                hred[rod]=1;
            }
            else if(ch=='B')
            {
                hblue[rod]=1;
            }
            else
            {
                hgreen[rod]=1;
            } 
        }
         int c=0;
        for(int i=0;i<10;i++)
        {
            if(hred[i]==1&&hblue[i]==1&&hgreen[i]==1)
            {
                c++;
            }
        }
          return c;
    }
};