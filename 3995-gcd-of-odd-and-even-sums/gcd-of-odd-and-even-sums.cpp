class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int odd=n*(1+(n-1));
       int even=n*(2+(n-1));
       int ans=gcd(odd,even);
       return ans;
    }
};