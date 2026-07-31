class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mpp;
        int ans=0;
        vector<pair<int, char>>vec;
        int l=word.length();
        if(l==0)
        {
            return 0;
        }
        for(int i=0;i<l;i++)
        {
            mpp[word[i]]+=1;
        }
       for(auto it:mpp)
       { 
         vec.push_back({it.second,it.first});
       }
       mpp.clear();
       sort(vec.begin(), vec.end(),greater<pair<int, char>>());
       int c=1;
       for(auto it:vec)
       {
         if(c<=8)
         {
            ans+=1*it.first;
            c++;
         }
        else if(c>8&&c<=16)
         {
            ans+=2*it.first;
            c++;
         }
         else if(c>16&&c<=24)
         {
            ans+=3*it.first;
            c++;
         }
         else
         {
            ans+=4*it.first;
            c++;
         }
       }
       return ans;
    }
};