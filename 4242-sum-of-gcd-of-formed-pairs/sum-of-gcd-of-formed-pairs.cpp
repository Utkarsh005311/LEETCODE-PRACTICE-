class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int k=nums.size();
        vector<int>prefixGCD;
        int ma=0;
        int g=0;
        for(int i=0;i<k;i++)
        {
           ma=max(ma,nums[i]);
           g=gcd(ma,nums[i]);
           prefixGCD.push_back(g);
        }
        sort(prefixGCD.begin(),prefixGCD.end());
        int i=0;
        int j=k-1;
        long long s=0;
        while(i<j)
        {
          s+=gcd(prefixGCD[i],prefixGCD[j]);
          i++;
          j--;
        }
        return s;
    }
};