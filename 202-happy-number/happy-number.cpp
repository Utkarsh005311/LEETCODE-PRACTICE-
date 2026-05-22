class Solution {
public:
    bool isHappy(int n) {
        set<int>seen;
        int s;
        while(n!=1 && seen.find(n)==seen.end())
       { 
            seen.insert(n);
            s=0;
            while(n!=0)
           { 
            int d=n%10;
            s=s+d*d;
            n=n/10;
           }
            n=s;
        }
      return n==1;
    }
};