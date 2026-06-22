class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mpp;
        int a=0,b=0,c=0,d=0,e=0;
        int l=text.length();
        for(int i=0;i<l;i++)
        {
            mpp[text[i]]+=1;
        }
        for(auto it:mpp)
        {
            if(it.first=='b')
            {
                a=it.second;
            }
            if(it.first=='a')
            {
                b=it.second;
            }
            if(it.first=='n')
            {
                c=it.second;

            }
             if(it.first=='l')
            {
                d=it.second/2;;

            }
             if(it.first=='o')
            {
                e=it.second/2;

            }
        }
            return min({a,b,c,d,e,});
        
            
    }
};