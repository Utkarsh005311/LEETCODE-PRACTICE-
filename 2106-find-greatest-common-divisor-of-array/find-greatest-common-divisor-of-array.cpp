class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[l-1]);
    }
};