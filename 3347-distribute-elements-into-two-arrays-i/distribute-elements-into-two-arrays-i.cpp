class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        vector<int>arr2;
        vector<int>result;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int i,j;
        i=0;
        j=0;
        int k=2;
        while(k!=n)
        {
            if(arr1[i]>arr2[j])
            {
                arr1.push_back(nums[k]);
                i++;
            }
            else
            {
                arr2.push_back(nums[k]);
                j++;
            }
            k++;
        }
       result=arr1;
       for(int i=0;i<arr2.size();i++)
       {
        result.push_back(arr2[i]);
       }
       return result;
    }
};