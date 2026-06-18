class Solution {
public:
    double angleClock(int hour, int minutes) {
      /*map<int,int>mpp;
      double h,m,hold;
      double ans;
      mpp[0]=12;
      int j=1;
      for(int i=5;i<60;i+=5)
      {
          mpp[j]=i;
          j++;
      }
      h=double(minutes)/2;
        hold=0;
      for(auto it:mpp)
      {
          if(it.first==hour)
          {
             hold=it.second;
             break;
          }
      }
       m=6*(abs(hold-double(minutes)));
       if(minutes<mpp[hour])
       {
         ans=m+h;
         if(ans>180)
         {
            return 360-ans;
         }
         return ans;
       }
       ans=abs(m-h);
       if(ans>180)
      {
        return 360-ans;
      }
      return ans;*/
      double h=30*hour+0.5*minutes;
      double m=6*minutes;
      double diff=abs(h-m);
      return min(diff,360-diff);
    }
};