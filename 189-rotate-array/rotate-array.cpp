class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        int n=nums.size();
        if(k>n)
        {
            k=k%n;
        }
        for(int i=n-k;i<n;i++)
        {
           temp.push_back(nums[i]);
        }
        int j=n-1;
        for(int i=(n-1)-k;i>=0;i--)
        {
            nums[j]=nums[i];
            j--;
        }
         j=0;
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[j];
            j++;
        }
    }
};