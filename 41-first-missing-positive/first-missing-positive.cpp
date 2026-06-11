class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
        
        // Step 1: Place each number in its correct index slot if possible
        for (int i = 0; i < n; i++) {
            // Loop ensures we handle chained swaps correctly
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // Step 2: Find the first index that doesn't match its expected value
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1; // This integer is missing
            }
        }
        
        // Step 3: If all positions 1 to n are filled, the missing one is n + 1
        return n + 1;
    }
};
