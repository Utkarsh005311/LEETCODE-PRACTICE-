class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int d=arr[n-1]-arr[n-2];
        for(int i=0;i<n-1;i++)
        {
           if((arr[i+1]-arr[i])!=d)
           {
            return false;
           }
        }
        return true;   
    }
};